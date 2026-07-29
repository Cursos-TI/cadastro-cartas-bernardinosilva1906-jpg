#include <stdio.h>

// Desafio Super Trunfo - Nivel Novato
// Comparacao de duas cartas usando apenas o atributo populacao.

int main(void) {
    // Dados pre-definidos da primeira carta.
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char cidade1[30] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11f;
    float pib1 = 699.28f;
    int pontosTuristicos1 = 50;

    // Dados pre-definidos da segunda carta.
    char estado2[3] = "RJ";
    char codigo2[4] = "B02";
    char cidade2[30] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25f;
    float pib2 = 300.50f;
    int pontosTuristicos2 = 30;

    // Calculo dos atributos derivados.
    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0f) / (float) populacao1;

    float densidadePopulacional2 = (float) populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / (float) populacao2;

    // Exibicao dos dados da primeira carta.
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    // Exibicao dos dados da segunda carta.
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // Comparacao de um unico atributo escolhido diretamente no codigo.
    printf("\nComparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: As cartas empataram!\n");
    }

    return 0;
}
