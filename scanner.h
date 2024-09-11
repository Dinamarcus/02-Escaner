#ifndef SCANNER_H
#define SCANNER_H

typedef enum {
    IDENTIFICADOR = 18,
    CONSTANTE = 21,
    OPERADOR_MAS = 22,
    OPERADOR_MENOS = 23,
    OPERADOR_MULTIPLICACION = 24,
    OPERADOR_DIVISION = 25,
    OPERADOR_MODULO = 26,
    ASIGNACION = 28,
    PARENTESIS_ABRE = 30,
    PARENTESIS_CIERRA = 31,
    COMA = 32,
    PUNTO_Y_COMA = 33,
    FDT = 34,
    ERROR_GENERAL = 35,
    ERROR_IDENTIFICADOR = 19,
    ERROR_CONSTANTE = 20,
    ERROR_ASIGNACION_DOS_PUNTOS = 27,
    ERROR_ASIGNACION_IGUAL = 29
} TokenType;

typedef struct {
    TokenType tipo;
    char lexema[100];
} Token;

void initTablaTransicion();
int getColumn(int c);

Token getNextToken();
void printToken(Token token);

int is_alpha(int c);
int is_digit(int c);

#endif // SCANNER_H