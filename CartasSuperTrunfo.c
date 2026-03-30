#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  //CARTA1

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    double area1;
    double pib1;
    int pontos1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    double area2;
    double pib2;
    int pontos2;

    // ===== ENTRADA CARTA 1 =====
    printf("Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf(" %lf", &area1);

    printf("PIB: ");
    scanf(" %lf", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // ===== ENTRADA CARTA 2 =====
    printf("\nCarta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    getchar(); // limpa ENTER

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf(" %lf", &area2);

    printf("PIB: ");
    scanf(" %lf", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ==== SAÍDA ====
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf km2\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf km2\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0; 
}
