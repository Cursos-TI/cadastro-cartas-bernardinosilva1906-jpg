#include <stdio.h>

int main() {
    // Declarar variaveis Produto, u i estoque, double valor unitario, float preco, int quantidade;
    // u i quatidade minima
    char produtoA[30]= "Produto A";
    char produtoB[30]= "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.75;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB, resultadoValorTotal;

    // Exibir informações do produto
    printf("Produto: %s tem estoque %u e valor unitario é %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto: %s tem estoque %u e valor unitario é %.2f\n", produtoB, estoqueB, valorB);

    // Comparações com valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("Produto: %s tem estoque maior que o minimo: %d\n", produtoA, resultadoA);
    printf("Produto: %s tem estoque maior que o minimo: %d\n", produtoB, resultadoB);
    
    // Calcula e compara os valores totais dos estoques.
    valorTotalA = (double) estoqueA * valorA;
    valorTotalB = (double) estoqueB * valorB;
    resultadoValorTotal = valorTotalA > valorTotalB;

    printf(
        "O valor total de A (R$ %.2f) e maior que o valor total de B (R$ %.2f): %d\n",
        valorTotalA,
        valorTotalB,
        resultadoValorTotal
    );

    return 0;
}

