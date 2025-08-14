#include <stdio.h>

int main() {
    // Variáveis
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    while(getchar() != '\n'); 

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, 50, stdin);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    while(getchar() != '\n');

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, 50, stdin);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCadastro concluido!\n");

    // Exibição dos dados da Carta 1 
    printf("\nDados da Carta 1:\n");
    printf("Codigo da Carta: %s\n", codigoCarta1);
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("PIB: %.2f\n", pib1);
    printf("Area: %.2f\n", area1);
    printf("Populacao: %d\n", populacao1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    
    // Exibição dos dados da Carta 2 
    printf("\nDados da Carta 2:\n");
    printf("Codigo da Carta: %s\n", codigoCarta2);
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("PIB: %.2f\n", pib2);
    printf("Area: %.2f\n", area2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}