'use strict';
Object.defineProperty(exports, "__esModule", { value: true });
exports.activate = void 0;
const path = require("path");
const vscode_jsonrpc_1 = require("vscode-jsonrpc");
const vscode_1 = require("vscode");
const vscode_languageclient_1 = require("vscode-languageclient");
function activate(context) {
    let script = context.asAbsolutePath(path.join('..', '..', 'target', 'debug', 'server'));
    let serverOptions = {
        run: { command: script },
        debug: { command: script }
    };
    let clientOptions = {
        documentSelector: ['czlang'],
        synchronize: {
            fileEvents: vscode_1.workspace.createFileSystemWatcher('**/*.*')
        }
    };
    // Create the language client and start the client.
    let lc = new vscode_languageclient_1.LanguageClient('czlang Server', serverOptions, clientOptions);
    // enable tracing (.Off, .Messages, Verbose)
    lc.trace = vscode_jsonrpc_1.Trace.Verbose;
    let disposable = lc.start();
    // Push the disposable to the context's subscriptions so that the
    // client can be deactivated on extension deactivation
    context.subscriptions.push(disposable);
}
exports.activate = activate;
//# sourceMappingURL=extension.js.map