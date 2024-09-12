#include <stdio.h>
#include "scanner.h"

int main() {
    Token token;

    initTablaTransicion();  // Inicializar la tabla de transición

    do {
        token = getNextToken();  // Leer desde stdin
        printToken(token);       // Escribir en stdout
    } while (token.tipo != FDT);

    return 0;
}