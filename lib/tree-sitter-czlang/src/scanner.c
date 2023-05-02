// Mostly taken from:
// https://github.com/tree-sitter/tree-sitter-typescript/blob/master/common/scanner.h

#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  TERMINATOR,
};

void *tree_sitter_czlang_external_scanner_create() { return NULL; }
void tree_sitter_czlang_external_scanner_destroy(void *p) {}
void tree_sitter_czlang_external_scanner_reset(void *p) {}
unsigned tree_sitter_czlang_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_czlang_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    if (lexer->lookahead == '/') {
      skip(lexer);

      if (lexer->lookahead == '/') {
        skip(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          skip(lexer);
        }
      } else if (lexer->lookahead == '*') {
        skip(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '*') {
            skip(lexer);
            if (lexer->lookahead == '/') {
              skip(lexer);
              break;
            }
          } else {
            skip(lexer);
          }
        }
      } else {
        return false;
      }
    } else {
      return true;
    }
  }
}

static bool scan_terminator(TSLexer *lexer) {
  lexer->result_symbol = TERMINATOR;
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->lookahead == 0) return true;
    if (lexer->lookahead == '\n') break;
    if (!iswspace(lexer->lookahead)) return false;
    skip(lexer);
  }

  skip(lexer);

  if (!scan_whitespace_and_comments(lexer)) return false;

  switch (lexer->lookahead) {
    case '.':
    case '|':
      return false;
  }

  return true;
}

bool tree_sitter_czlang_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (valid_symbols[TERMINATOR]) {
    return scan_terminator(lexer);
  }

  return false;
}
