use crate::{
    ast::{Function, FunctionTrait, LangError, Receiver, Struct},
    types::Ptr,
};

use super::{
    flow_container::{CurrentFlowContainer, FlowContainer},
    FileSemanticAnalyzer, StructImplementation, Type, TypeQueryContext,
};

impl FileSemanticAnalyzer {
    pub(crate) fn validate_fun(&mut self, fun: &Ptr<Function>) {
        // TODO: fun name clash with other definitions?

        for par_ref in &fun.signature.parameters {
            self.query_parameter_type(&fun.signature, &par_ref);
        }
        self.query_return_type(&fun.signature);

        if let Some(receiver) = &fun.signature.receiver {
            if receiver.types.len() != 1 {
                self.errors.push(LangError::type_error(
                    &receiver.node,
                    "Receiver type must point to a struct".to_string(),
                ));
            } else if let Some(st) = self.validate_struct_receiver(&receiver) {
                self.bind_method_to_struct(fun, st);
            }
        }

        let mut flow_container = CurrentFlowContainer {
            flow: FlowContainer::start_flow(),
        };
        self.validate_block(&mut flow_container, &fun.body(), false);

        if let Some(ret) = &fun.signature.return_type {
            if flow_container.flow.returned.is_none() {
                self.errors.push(LangError::type_error(
                    &ret.node,
                    "Block must return a value".to_string(),
                ));
            }
        }
    }

    fn validate_struct_receiver(&mut self, receiver: &Receiver) -> Option<Ptr<Struct>> {
        if receiver.types.len() != 1 {
            self.errors.push(LangError::type_error(
                &receiver.node,
                "Receiver type must point to a struct".to_string(),
            ));
            return None;
        }
        let t = receiver.types.get(0).unwrap();

        let Some(receiver_type) = self.query_ref_type(&TypeQueryContext::StructMethodReceiver, t) else {
            self.errors.push(LangError::type_error(
                &receiver.node,
                format!("Invalid receiver type: {:?}", t.r#type),
            ));
            return None;
        };
        let base_receiver_type = match receiver_type {
            Type::RefType(ref_type) => ref_type.r#type.as_ref().clone(),
            _ => receiver_type,
        };
        let st = match base_receiver_type {
            Type::Struct(st) => st,
            _ => {
                self.errors.push(LangError::type_error(
                    &receiver.node,
                    "Receiver type must point to a struct".to_string(),
                ));
                return None;
            }
        };
        return Some(st);
    }

    fn bind_method_to_struct(&mut self, fun: &Ptr<Function>, st: Ptr<Struct>) {
        // struct most have in validated before hand, i.e. it must exist:
        let entry = self.structs.get_mut(&st.node.id()).unwrap();
        let implementation = entry
            .specializations
            .entry("".to_string())
            .or_insert(StructImplementation { methods: vec![] });
        if implementation
            .methods
            .iter()
            .find(|m| m.signature.name == fun.signature.name)
            .is_some()
        {
            self.errors.push(LangError::type_error(
                &fun.signature.name_node,
                format!("Duplicated method: {}", fun.signature.name),
            ));
            return;
        }
        implementation.methods.push(fun.clone());
    }
}
