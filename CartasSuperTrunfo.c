#include <stdio.h>

// Desafio Super Trunfo - Paises
// Nivel Mestre: cadastro, calculos e comparacao de duas cartas.

int main(void) {
    // Variaveis que armazenam os dados da primeira carta.
    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variaveis que armazenam os dados da segunda carta.
    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Resultados das comparacoes: 1 indica vitoria da Carta 1 e 0 da Carta 2.
    int comparaPopulacao;
    int comparaArea;
    int comparaPib;
    int comparaPontosTuristicos;
    int comparaDensidade;
    int comparaPibPerCapita;
    int comparaSuperPoder;

    // Entrada dos dados da primeira carta.
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (exemplo: A01): ");
    scanf("%9s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area em km2 (use ponto): ");
    scanf("%f", &area1);

    printf("PIB em bilhoes de reais (use ponto): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da segunda carta.
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (exemplo: B02): ");
    scanf("%9s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area em km2 (use ponto): ");
    scanf("%f", &area2);

    printf("PIB em bilhoes de reais (use ponto): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos da densidade populacional e do PIB per capita.
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float) populacao1;

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float) populacao2;

    // O inverso da densidade valoriza a cidade com menor densidade populacional.
    superPoder1 = (float) populacao1
        + area1
        + pib1
        + (float) pontosTuristicos1
        + pibPerCapita1
        + (1.0f / densidadePopulacional1);

    superPoder2 = (float) populacao2
        + area2
        + pib2
        + (float) pontosTuristicos2
        + pibPerCapita2
        + (1.0f / densidadePopulacional2);

    // Comparacoes: a maior densidade perde; nos outros atributos, o maior vence.
    comparaPopulacao = populacao1 > populacao2;
    comparaArea = area1 > area2;
    comparaPib = pib1 > pib2;
    comparaPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    comparaDensidade = densidadePopulacional1 < densidadePopulacional2;
    comparaPibPerCapita = pibPerCapita1 > pibPerCapita2;
    comparaSuperPoder = superPoder1 > superPoder2;

    // Saida organizada dos dados das duas cartas.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Exibicao clara do vencedor e do resultado logico de cada comparacao.
    printf("\nComparacao de Cartas:\n");
    printf(
        "Populacao: %s venceu (%d)\n",
        comparaPopulacao ? "Carta 1" : "Carta 2",
        comparaPopulacao
    );
    printf(
        "Area: %s venceu (%d)\n",
        comparaArea ? "Carta 1" : "Carta 2",
        comparaArea
    );
    printf(
        "PIB: %s venceu (%d)\n",
        comparaPib ? "Carta 1" : "Carta 2",
        comparaPib
    );
    printf(
        "Pontos Turisticos: %s venceu (%d)\n",
        comparaPontosTuristicos ? "Carta 1" : "Carta 2",
        comparaPontosTuristicos
    );
    printf(
        "Densidade Populacional: %s venceu (%d)\n",
        comparaDensidade ? "Carta 1" : "Carta 2",
        comparaDensidade
    );
    printf(
        "PIB per Capita: %s venceu (%d)\n",
        comparaPibPerCapita ? "Carta 1" : "Carta 2",
        comparaPibPerCapita
    );
    printf(
        "Super Poder: %s venceu (%d)\n",
        comparaSuperPoder ? "Carta 1" : "Carta 2",
        comparaSuperPoder
    );

    return 0;
}
