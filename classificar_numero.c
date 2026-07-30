#include <stdio.h>

int main() {
 /*
 if (condicao) {
    // bloco de código a ser executado se a condição for verdadeira
 } else {
    // bloco de código a ser executado se a condição for falsa
 }
 */
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
} 
