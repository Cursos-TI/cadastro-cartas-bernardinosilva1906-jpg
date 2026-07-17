#include <stdio.h>

// Desafio Super Trunfo - Paises
// Nivel Novato: cadastro e exibicao dos dados de duas cartas.

int main(void) {
    // Variaveis que armazenam os dados da primeira carta.
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variaveis que armazenam os dados da segunda carta.
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada dos dados da primeira carta.
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (exemplo: A01): ");
    scanf("%9s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Area em km2 (use ponto): ");
    scanf("%f", &area2);

    printf("PIB em bilhoes de reais (use ponto): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Saida organizada dos dados das duas cartas.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
