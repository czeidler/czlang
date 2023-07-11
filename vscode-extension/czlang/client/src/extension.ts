'use strict';

import * as path from 'path';

import { workspace, ExtensionContext } from 'vscode';
import { LanguageClientOptions, LanguageClient, ServerOptions } from 'vscode-languageclient/node';

export function activate(context: ExtensionContext) {
    const script = context.asAbsolutePath(path.join('..', '..', 'target', 'debug', 'server'));

    const serverOptions: ServerOptions = {
        run : { command: script },
        debug: { command: script }
    };

    const clientOptions: LanguageClientOptions = {
        documentSelector: ['czlang'],
        synchronize: {
            fileEvents: workspace.createFileSystemWatcher('**/*.*')
        }
    };

    // Create the language client and start the client.
    let lc = new LanguageClient('czlang Server', serverOptions, clientOptions);
    lc.start();
}