#include <stdio.h>
#include <string.h> // Necessário para a função strtok

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
    
    // Novas variáveis para os cálculos
    float densidadePopulacional1;
    float pibPerCapita1;
    float densidadePopulacional2;
    float pibPerCapita2;
    
    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    while(getchar() != '\n'); 

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, 50, stdin);

    strtok(nomeCidade1, "\n");

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

    strtok(nomeCidade2, "\n");

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos ---
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; 
    
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; 

    printf("\nCadastro concluido!\n");

    // --- Exibição dos dados da Carta 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    // --- Exibição dos dados da Carta 2 ---
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}