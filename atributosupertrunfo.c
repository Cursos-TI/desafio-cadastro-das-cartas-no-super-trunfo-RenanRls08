#include <stdio.h>

int main()
{ 


    int carta;
    char codigo[10];
    char estado[30];
    char cidade[50];
    float populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    int pturisticos;


    printf("Digite sua carta 1: \n");
    scanf("%d", &carta);

    printf("Digite sua carta 2: \n");
    scanf("%d", &carta);

    printf("Digite seu código 1: \n");
    scanf("%s", codigo);

    printf("Digite seu código 2: \n");
    scanf("%s", codigo);

    printf("Digite seu estado 1: \n");
    scanf("%s", estado);

    printf("Digite seu estado 2: \n");
    scanf("%s", estado);

    printf("Digite sua cidade 1: \n");
    scanf("%s", cidade);

    printf("Digite sua cidade 2: \n");
    scanf("%s", cidade);

    printf("Digite sua população 1: \n");
    scanf("%f", &populacao1);

    printf("Digite sua população 2: \n");
    scanf("%f", &populacao2);

    printf("Digite a area 1: \n");
    scanf("%f", &area1);

    printf("Digite a area 2: \n");
    scanf("%f", &area2);

    printf("Digite seu PIB 1: \n");
    scanf("%f", &pib1);

    printf("Digite seu PIB 2: \n");
    scanf("%f", &pib2);

    printf("Digite pontos turísticos cidade 1: \n");
    scanf("%d", &pturisticos);

    printf("Digite pontos turísticos cidade 2: \n");
    scanf("%d", &pturisticos);


 
    if (populacao1>populacao2)
    {
        printf("População da cidade de Sorocaba é maior!\n");

    } else
    
    {
        printf("População de Buzios é maior!\n");

    
    }


    if (area1>area2)
    {
        printf("Área de Sorocaba é maior!\n");

    } else
    
    {
        printf("Área de Buzios é maior!\n");
    
    }

    if (pib1>pib2)
    {
        printf("PIB de Sorocaba é maior!\n");

    } else
    
    {
        printf("PIB de Buzios é maior!\n");
    
    }
    
    

    return 0; 

    
}