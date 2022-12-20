
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