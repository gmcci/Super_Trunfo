#include <stdio.h>

int main(){

    // Variáveis da primeira cidade
    char estado0;
    char codigo0;
    char cidade0[20];
    int populacao0 = 0;
    float area0 = 0;
    float pib0 = 0;
    int pontos0 = 0;

    // Variáveis da segunda cidade
    char estado1;
    char codigo1;
    char cidade1[20];
    int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int pontos1 = 0;


    // Cidade 1

    printf("\nCarta 1:\n");   
    printf("\nEstado [A-H]: ");
    scanf(" %c", &estado0);

    printf("Código [1-4]: ");
    scanf(" %c", &codigo0);

    /* Para não receber o ENTER da
       variável anterior e pular
       a resposta de cidade */

    while(getchar() != '\n');

    printf("Cidade: ");
    fgets(cidade0, sizeof(cidade0), stdin);

    printf("População: ");
    scanf("%d", &populacao0);

    printf("Área in km²: ");
    scanf("%f", &area0);

    printf("PIB: ");
    scanf("%f", &pib0);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos0);

    int densidade0 = populacao0 / area0;
    int pib_capita0 = pib0 / populacao0;


    // Cidade 2

    printf("\n\nCarta 2: \n");
    printf("\nEstado [A-H]: ");
    scanf(" %c", &estado1);

    printf("Código [1-4]: ");
    scanf(" %c", &codigo1);

    /* Para não receber o ENTER da
       variável anterior e pular
       a resposta de cidade */

    while(getchar() != '\n');

    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área in km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    float densidade1 = populacao1 / area1;
    float pib_capita1 = pib1 / populacao1;


    // Print geral
 
    printf("\n\n");
    printf("----------------------------------------------------");
    printf("\nCarta 1: \n\n");
    printf("Estado: %c\n", estado0);
    printf("Código: %c0%c\n", estado0, codigo0);
    printf("Cidade: %s", cidade0);
    printf("População: %d\n", populacao0);
    printf("Área: %.2f km²\n", area0);
    printf("PIB: %.2f bilhões de reais\n", pib0);
    printf("Pontos turísticos: %d\n", pontos0);
    printf("Densidade populacional: %.2f hab/hm²\n", densidade0);
    printf("PIB per Capita: %.2f reais\n", pib_capita0);
    printf("\n");

    printf("\nCarta 2: \n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c0%c\n", estado1, codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %d hab/km²\n", densidade1);
    printf("PIB per Capita: %d reais\n", pib_capita1);
    printf("\n");
    printf("----------------------------------------------------\n\n");

    return 0;
}
