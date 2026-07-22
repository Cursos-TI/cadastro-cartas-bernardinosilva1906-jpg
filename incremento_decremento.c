#include <stdio.h>

int main() {
/*
Incremento (++) 
Pré-incremento ++a
Pós-incremento a++
Decremento (--)
Pré-decremento --a
*/

    int numero1 = 1;

    printf("Valor inicial: %d\n", numero1);

    printf("Pos-incremento mostra: %d\n", numero1++);
    printf("Valor depois do pos-incremento: %d\n", numero1);

    printf("Pre-incremento mostra: %d\n", ++numero1);

    printf("Pos-decremento mostra: %d\n", numero1--);
    printf("Valor depois do pos-decremento: %d\n", numero1);

    printf("Pre-decremento mostra: %d\n", --numero1);

    return 0;
}
