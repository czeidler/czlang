'use strict';

import * as path from 'path';
import * as os from 'os';

import {Trace} from 'vscode-jsonrpc';
import { workspace, ExtensionContext } from 'vscode';
import { LanguageClient, LanguageClientOptions, ServerOptions } from 'vscode-languageclient';

export function activate(context: ExtensionContext) {
    let script = context.asAbsolutePath(path.join('..', '..', 'target', 'debug', 'server'));

    let serverOptions: ServerOptions = {
        run : { command: script },
        debug: { command: script }
    };

    let clientOptions: LanguageClientOptions = {
        documentSelector: ['czlang'],
        synchronize: {
            fileEvents: workspace.createFileSystemWatcher('**/*.*')
        }
    };

    // Create the language client and start the client.
    let lc = new LanguageClient('czlang Server', serverOptions, clientOptions);
    // enable tracing (.Off, .Messages, Verbose)
    lc.trace = Trace.Verbose;
    let disposable = lc.start();

    // Push the disposable to the context's subscriptions so that the
    // client can be deactivated on extension deactivation
    context.subscriptions.push(disposable);
}