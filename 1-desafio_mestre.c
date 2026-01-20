#include <stdio.h>
#include <string.h>

int main(){

    // Variáveis da primeira cidade
    char estado0;
    char codigo0;
    char cidade0[30];
    unsigned int populacao0 = 0;
    float area0 = 0;
    float pib0 = 0;
    unsigned int pontosT0 = 0;

    // Variáveis da segunda cidade
    char estado1;
    char codigo1;
    char cidade1[30];
    unsigned int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    unsigned int pontosT1 = 0;


    unsigned int choice0 = 0;
    unsigned int choice1 = 0;
    unsigned int pontos0 = 0;
    unsigned int pontos1 = 0;



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
    scanf("%d", &pontosT0);

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
    scanf("%d", &pontosT1);

    float densidade1 = populacao1 / area1;
    float pib_capita1 = pib1 / populacao1;


    printf("\n\n  Agora escolha o primeiro atributo para comparação:\n\n");

    printf("\n#######################\n");
    printf("[0] População\n");
    printf("[1] Área\n"); 
    printf("[2] PIB\n");
    printf("[3] Pontos turísticos\n");
    printf("[4] Densidade\n");
    printf("[5] PIB per capita");
    printf("\n#######################\n\n");

    printf(" > ");
    scanf("%d", &choice0);

    printf("\n\n");
    
    printf("\n\n  Agora escolha o segundo atributo para comparação:\n\n");
    printf("\n#######################\n");
    printf("[0] População\n");
    printf("[1] Área\n");
    printf("[2] PIB\n");
    printf("[3] Pontos turísticos\n");
    printf("[4] Densidade\n");
    printf("[5] PIB per capita");
    printf("\n#######################\n\n");

    printf(" > ");
    scanf("%d", &choice1);

    printf("\n\n");


    if(choice1 != choice0 && choice0 <= 5 && choice0 >= 0 && choice1 <= 5 && choice1 >= 0 ){


        // Print geral
 
        printf("\n\n");
        printf("\n----------------------------------------------------\n");
        printf("              Resultado das comparações");
        printf("\n----------------------------------------------------\n\n");


        printf("    Atributo: ");


        switch(choice0){

            case 0:

                printf("População\n\n");

                printf("Carta 1 - %s - %d\n", cidade0, populacao0);
                printf("Carta 2 - %s - %d\n", cidade1, populacao1);


                if(populacao0 > populacao1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(populacao0 == populacao1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 1:

                printf("Área em km²\n\n");

                printf("Carta 1 - %s - %.2f\n", cidade0, area0);
                printf("Carta 2 - %s - %.2f\n", cidade1, area1);


                if(area0 > area1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(area0 == area1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 2:

                printf("PIB\n\n");

                printf("Carta 1 - %s - %.2f\n", cidade0, pib0);
                printf("Carta 2 - %s - %.2f\n", cidade1, pib1);

                if(pib0 > pib1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(pib0 == pib1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 3:

                printf("Pontos Turísticos\n\n");

                printf("Carta 1 - %s - %d\n", cidade0, pontosT0);
                printf("Carta 2 - %s - %d\n", cidade1, pontosT1);


                if(pontosT0 > pontosT1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(pontosT0 == pontosT1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 4:

                printf("Densidade populacional\n\n");

                printf("Carta 1 - %s - %.2f\n", cidade0, densidade0);
                printf("Carta 2 - %s - %.2f\n", cidade1, densidade1);


                if(densidade0 > densidade1){
                    printf("\nCarta 2 ganhou.\n");
                    pontos0 += 1;
                }else if(densidade0 == densidade1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 1 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 5:

                printf("PIB per capita\n\n");

                printf("Carta 1 - %s - %.2f\n", cidade0, pib_capita0);
                printf("Carta 2 - %s - %.2f\n", cidade1, pib_capita1);


                if(pib_capita0 > pib_capita1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(pib_capita0 == pib_capita1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

        }


        printf("\n    Atributo: ");


        switch(choice1){

            case 0:

                printf("População\n\n");

                printf("Carta 1 - %s - %d\n", cidade0, populacao0);
                printf("Carta 2 - %s - %d\n", cidade1, populacao1);


                if(populacao0 > populacao1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(populacao0 == populacao1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 1:

                printf("Área em km²\n\n");

                printf("Carta 1 - %s - %.2f\n", cidade0, area0);
                printf("Carta 2 - %s - %.2f\n", cidade1, area1);


                if(area0 > area1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(area0 == area1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 2:

                printf("PIB\n\n");

                printf("Carta 1 - %s - %.2f\n", cidade0, pib0);
                printf("Carta 2 - %s - %.2f\n", cidade1, pib1);

                if(pib0 > pib1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(pib0 == pib1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 3:

                printf("Pontos Turísticos\n\n");

                printf("Carta 1 - %s - %d\n", cidade0, pontosT0);
                printf("Carta 2 - %s - %d\n", cidade1, pontosT1);


                if(pontosT0 > pontosT1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(pontosT0 == pontosT1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 4:

                printf("Densidade populacional\n\n");

                printf("Carta 1 - %s - %.2f\n", cidade0, densidade0);
                printf("Carta 2 - %s - %.2f\n", cidade1, densidade1);


                if(densidade0 > densidade1){
                    printf("\nCarta 2 ganhou.\n");
                    pontos0 += 1;
                }else if(densidade0 == densidade1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 1 ganhou.\n");
                    pontos1 += 1;
                }

                break;

            case 5:

                printf("PIB per capita\n\n");

                printf("Carta 1 - %s - %.2f\n", cidade0, pib_capita0);
                printf("Carta 2 - %s - %.2f\n", cidade1, pib_capita1);


                if(pib_capita0 > pib_capita1){
                    printf("\nCarta 1 ganhou.\n");
                    pontos0 += 1;
                }else if(pib_capita0 == pib_capita1){
                    printf("\nResultado: Empate ! \n");
                }else{
                    printf("\nCarta 2 ganhou.\n");
                    pontos1 += 1;
                }

                break;

        }

        printf("----------------------------------------------------\n\n");

        printf("\n----------------------------------------------------\n\n");
        
        if(pontos0 > pontos1){
            printf("\nCarta 1 ganhou.\n");
        }else if(pontos1 > pontos0){
            printf("\nCarta 2 ganhou\n");
        }else{
            printf("\nEmpate !\n");
        }
        
        printf("\n\nPontuação:  \n");

        printf("\nCarta 1: %d\n", pontos0);
        printf("\nCarta 2: %d\n", pontos1);

        printf("----------------------------------------------------\n\n");

    }else{
        if(choice0 == choice1){
            printf("\n\nErro ! Os valores não podem ser iguais.\n"); 
        }else{
            printf("\n\nErro ! Os valores não podem ser nem maiores nem menores que os mostrados na seleção.\n");
        }
    }

    return 0;
}

