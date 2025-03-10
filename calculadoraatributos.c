#include <stdio.h>

int main()
{ 

    /*
    Divisão (/)
    */


    int carta;
    char codigo[10];
    char estado[30];
    char cidade[50];
    float populacao1, populacao2;
    float area1, area2; 
    int pturisticos;
    float Densidadepopulacional1, Densidadepopulacional2; 
    float pibpercapita1, pibpercapita2; 
    int divisao1, divisao2, divisao3, divisao4;  


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

    printf("Digite pontos turísticos cidade 1: \n");
    scanf("%d", &pturisticos);

    printf("Digite pontos turísticos cidade 2: \n");
    scanf("%d", &pturisticos);

    printf("Entre com a populacao1: \n"); 
    scanf("%f", &populacao1);

    printf("Entre com a área 1: \n"); 
    scanf("%f", &area1); 


   //operacao divisao1    
    divisao1 = populacao1/area1; 


    printf("A densidade populacional 1 é: %d \n", divisao1);


    printf("Entre com a populacao2: \n"); 
    scanf("%f", &populacao1);

    printf("Entre com a área 2: \n"); 
    scanf("%f", &area1); 


    //operacao divisao2
    divisao2 = populacao2/area2; 


    printf("A densidade populacional 2 é: %d \n", divisao2);


    printf("Entre com o PIB 1: \n"); 
    scanf("%f", &pibpercapita1);

    printf("Entre com a população 1: \n"); 
    scanf("%f", &populacao1); 

    //operacao divisao 
    divisao3 = pibpercapita1/populacao1; 

    printf("O PIB per capita 1 é: %d \n"); 


    printf("Entre com o PIB 2: \n"); 
    scanf("%f", &pibpercapita2);

    printf("Entre com a população 2: \n"); 
    scanf("%f", &populacao2); 

    //operacao divisao 
    divisao4 = pibpercapita2/populacao2; 

    printf("O PIB per capita 2 é: %d \n"); 



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

    if (pibpercapita1>pibpercapita2)
    {
        printf("PIB de Sorocaba é maior!\n");

    } else
    
    {
        printf("PIB de Buzios é maior!\n");
    
    }
    
    

    return 0; 

    
}