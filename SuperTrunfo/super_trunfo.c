#include <stdio.h>

// Criando as Cartas do Super Trunfo
int main()
{
    char estado;
    char numero[4];
    char nome[40];
    int populacao;
    float PIB;
    float area;
    int turistico;
    float densidade_populacional;
    float PIB_per_capita;
    //Dados da carta 1
    printf("Carta 1\n");
    
    printf("Estado letra A a H: ");
    scanf(" %c", &estado);

    printf("A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s" , numero);
    
    printf("Nome da cidade: ");
    scanf("%s", nome);
    
    printf("População: ");
    scanf(" %i" , &populacao);
    
    printf("Área: ");
    scanf("%f", &area);
    
    printf("PIB: ");
    scanf("%f", &PIB);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&turistico);

    densidade_populacional= (float) populacao /area;
    PIB_per_capita= PIB / (float)populacao;

    char estado2;
    char numero2[4];
    char nome2[40];
    int populacao2;
    float PIB2;
    float area2;
    int turistico2;
    float densidade_populacional2;
    float PIB_per_capita2;
    //Dados da carta 2
    printf("Carta 2\n");
    
    printf("Estado letra A a H: ");
    scanf(" %c", &estado2);

    printf("A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s" , numero2);
    
    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf(" %i" , &populacao2);
    
    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &PIB2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%i",&turistico2);

    densidade_populacional2= (float) populacao2/area2;
    PIB_per_capita2= PIB2 / (float)populacao2;
    
    int opcao, opcao2;
    float somaCarta1 = 0, somaCarta2 = 0;

    printf("Escolha 2 atributos para comparar:\n");
    printf("1- População: \n");
    printf("2- Area\n");
    printf("3- PIB \n");
    printf("4- PIB per capita\n");
    printf("5- Densidade populacional\n");
    printf("6- N° de pontos turísticos\n");
    printf("1° Atributo: ");
    scanf("%d", &opcao);

    printf("2° Atributo: ");
    scanf("%d", &opcao2);
    
    while (opcao==opcao2)
    {
        printf("2° Atributo: ");
        scanf("%d", &opcao2);
    }
    float atributosCarta1[6] = {populacao, area, PIB, PIB_per_capita, densidade_populacional, turistico};
    float atributosCarta2[6] = {populacao2, area2, PIB2, PIB_per_capita2, densidade_populacional2, turistico2};
    
    somaCarta1 = atributosCarta1[opcao - 1] + atributosCarta1[opcao2 - 1];
    somaCarta2 = atributosCarta2[opcao - 1] + atributosCarta2[opcao2 - 1];
    
    printf("------Carta 1------- \n");
    printf("Nome da cidade: %s\n", nome);
    printf("Soma dos atributos escolhidos: %.2f\n", somaCarta1);
    printf("------Carta 2------ \n");
    printf("Nome da cidade: %s\n", nome2);
    printf("Soma dos atributos escolhidos: %.2f\n", somaCarta2);
    printf("-----------------\n");
    
    if (somaCarta1 > somaCarta2)
    {
        printf("Carta 1 venceu com a maior soma dos atributos!\n");
    }
    else if (somaCarta2 > somaCarta1)
    {
        printf("Carta 2 venceu com a maior soma dos atributos!\n");
    }
    else
    {
        printf("Empate! Ambas as cartas têm a mesma soma de atributos.\n");
    }
    
    return 0;
}
   