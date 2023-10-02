# Ceta Programming Language

Ceta is a experimental fun programming language.
Ceta aims to be a fairly small and simple language offering memory safety without garbage collection and making it easy to provide good tooling.

![Hello world](docs/images/HelloWorld.png)

Feature Summary (work in progress):
- [Sum Types](#sumtypes)
- Flow analysis. Type checks automatically narrow down a sum type
- First class [`error-either`](#erroreither) types, e.g. used for nullable or result types
- [Pipe and "error pipe" operators](#pipes)
- [Optional chaining](#optionalchaining)
- [Error returns](#errorreturn)
- IDE friendly, all semantics can be derived quickly without complex code analysis
- "Query" compiler which is also used in the [language server](#languageserver)

## Sum Types<a id="sumtypes"></a>
A variable can have multiple types, for example, a variable can have the type `string | bool` meaning it can be a string or a boolean.

### Flow analysis and Type narrowing
A type from a sum type can be accessed using the `typeof` operator.
The information from a previous `typeof` check is preserved in the current scope.

![Typeof](docs/images/TypeofOperator.png)


## Error-Either Types<a id="erroreither"></a>

Ceta has a build in `error Either` type which can hold a "good" value and a "bad" error value.
The type of this Either type is written as:
`Good ? Bad`.
This can be used to describe result types are either the result value or the result error, e.g. `i32 ? Error1`.
The same mechanism can be used to describe nullable types, e.g `i32 ? null`.

The difference between an Either type and a normal sum type is that Ceta provides some special syntax to make it easier to handle them.
Either types can be used to:
- Check for the error case using an error check `result != ?` or `result == ?`

Error check:

![Error check](docs/images/ErrorCheck.png)


# Pipes<a id="pipes"></a>
The pipe operator `|>` takes the "good" part of an expression an pipes it into a right hand side expression.
The value becomes available as a special `$` variable.

![Error check](docs/images/PipeOperatorOnEither.png)

The error pipe operator `|?>` works like the normal pipe operator but takes the "bad" part of an error-either type.
This can, for example, be used to handle an error and provide a default value instead.

![Error check](docs/images/ErrorPipe.png)

## Optional Chaining<a id="optionalchaining"></a>
Optional chaining works for all error either types, i.e. it works the same for nullable and error types.

![Optional chaining](docs/images/OptionalChaining.png)

## Error Return<a id="errorreturn"></a>
The `?` operator can be used to return automatically from a function in case of error case.

![Error return](docs/images/ErrorReturn.png)

## Language Server<a id="languageserver"></a>

# Build Instructions
You can't build a compiler executable right now but you can run tests and build a Ceta language server.

## Generate and test tree sitter grammar

```bash
cd lib/tree-sitter-czlang
npx tree-sitter generate
npx tree-sitter test
```

## Run tests

```bash
cargo test --package czlang --lib
```

## Compile the language server

In the `language-server` directory:

```bash
cargo build --bin server
```

## Testing the language server

Open the `vscode-extension/czlang` directory in VSCode and press `F5` to start an instance running the language server.

The server log is located in `lib/server.log`.

The language server will work for all files with `.cz` extension.
