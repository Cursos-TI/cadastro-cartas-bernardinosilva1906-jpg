#include <stdio.h>

int main() {
    /*
    Atribuicao Simples (=)
    Atribuicao com Soma (+=)
    Atribuicao com Subtracao (-=)
    Atribuicao com Multiplicacao (*=)
    Atribuicao com Divisao (/=)
    */
    int numero1 = 10, numero2 = 5, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 20;
    printf("Resultado: %d\n", resultado);

    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    resultado *= numero2;
    printf("Resultado: %d\n", resultado);

    resultado /= numero2;
    printf("Resultado: %d\n", resultado);

    return 0;
}
