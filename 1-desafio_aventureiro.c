#include <stdio.h>
#include <string.h>

int main(){

    // Variáveis da primeira cidade
    char estado0;
    char codigo0;
    char cidade0[30];
    int populacao0 = 0;
    float area0 = 0;
    float pib0 = 0;
    int pontos0 = 0;

    // Variáveis da segunda cidade
    char estado1;
    char codigo1;
    char cidade1[30];
    int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int pontos1 = 0;


    unsigned int choice = 0;


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

    cidade0[strcspn(cidade0, "\n")] = '\0'; // Para tirar o \n no final da variável

    printf("População: ");
    scanf("%d", &populacao0);

    printf("Área in km²: ");
    scanf("%f", &area0);

    printf("PIB: ");
    scanf("%f", &pib0);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos0);

    float densidade0 = populacao0 / area0;
    float pib_capita0 = pib0 / populacao0;



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

    cidade1[strcspn(cidade1, "\n")] = '\0'; // Para tirar o \n no final da variável

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


    printf("\n\n  Agora escolha qual atributo para comparação\n\n");

    printf("\n#######################\n");
    printf("[0] População\n");
    printf("[1] Área\n"); 
    printf("[2] PIB\n");
    printf("[3] Pontos turísticos\n");
    printf("[4] Densidade\n");
    printf("[5] PIB per capita");
    printf("\n#######################\n\n");

    printf(" > ");
    scanf("%d", &choice);

    // Print geral
 
    printf("\n\n");
    printf("\n----------------------------------------------------\n");
    printf("                Resultado final");
    printf("\n----------------------------------------------------\n\n");


    printf("Comparação de cartas - Atributo: ");


    switch(choice){

        case 0:

            printf("População\n\n");

            printf("Carta 1 - %s - %d\n", cidade0, populacao0);
            printf("Carta 2 - %s - %d\n", cidade1, populacao1);


            if(populacao0 > populacao1){
                printf("\nCarta 1 ganhou.\n");
            }else if(populacao0 == populacao1){
                printf("\nResultado: Empate ! \n");
            }else{
                printf("\nCarta 2 ganhou.\n");
            }

            break;

        case 1:

            printf("Área em km²\n\n");

            printf("Carta 1 - %s - %.2f\n", cidade0, area0);
            printf("Carta 2 - %s - %.2f\n", cidade1, area1);


            if(area0 > area1){
                printf("\nCarta 1 ganhou.\n");
            }else if(area0 == area1){
                printf("\nResultado: Empate ! \n");
            }else{
                printf("\nCarta 2 ganhou.\n");
            }

            break;

        case 2:

            printf("PIB\n\n");

            printf("Carta 1 - %s - %.2f\n", cidade0, pib0);
            printf("Carta 2 - %s - %.2f\n", cidade1, pib1);

            if(pib0 > pib1){
                printf("\nCarta 1 ganhou.\n");
            }else if(pib0 == pib1){
                printf("\nResultado: Empate ! \n");
            }else{
                printf("\nCarta 2 ganhou.\n");
            }

            break;

        case 3:

            printf("Pontos Turísticos\n\n");

            printf("Carta 1 - %s - %d\n", cidade0, pontos0);
            printf("Carta 2 - %s - %d\n", cidade1, pontos1);


            if(pontos0 > pontos1){
                printf("\nCarta 1 ganhou.\n");
            }else if(pontos0 == pontos1){
                printf("\nResultado: Empate ! \n");
            }else{
                printf("\nCarta 2 ganhou.\n");
            }

            break;

        case 4:

            printf("Densidade populacional\n\n");

            printf("Carta 1 - %s - %.2f\n", cidade0, densidade0);
            printf("Carta 2 - %s - %.2f\n", cidade1, densidade1);


            if(densidade0 > densidade1){
                printf("\nCarta 2 ganhou.\n");
            }else if(densidade0 == densidade1){
                printf("\nResultado: Empate ! \n");
            }else{
                printf("\nCarta 1 ganhou.\n");
            }

            break;

        case 5:

            printf("PIB per capita\n\n");

            printf("Carta 1 - %s - %.2f\n", cidade0, pib_capita0);
            printf("Carta 2 - %s - %.2f\n", cidade1, pib_capita1);


            if(pib_capita0 > pib_capita1){
                printf("\nCarta 1 ganhou.\n");
            }else if(pib_capita0 == pib_capita1){
                printf("\nResultado: Empate ! \n");
            }else{
                printf("\nCarta 2 ganhou.\n");
            }

            break;

    }

    printf("----------------------------------------------------\n\n");

    return 0;
}
