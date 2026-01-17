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
    printf("\n----------------------------------------------------\n");
    printf("                Resultado final");
    printf("\n----------------------------------------------------\n\n");

    printf("Comparação de cartas - Atributo: PIB\n\n");
    printf("Carta 1: %.2f\n", pib0);
    printf("Carta 2: %.2f\n", pib1);

    if(pib0 > pib1){
        printf("\nCarta 1 ganhou.\n");
    }else if(pib0 == pib1){
        printf("\nResultado: Empate ! \n");
    }
    else{
        printf("\nCarta 2 ganhou.\n");
    }

    printf("----------------------------------------------------\n\n");

    return 0;
}
