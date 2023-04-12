
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

Open the `vscode-extension/czlang` directory in VSCode and press f5 to start an instance running the language server.

The server log is located in `lib/server.log`.
