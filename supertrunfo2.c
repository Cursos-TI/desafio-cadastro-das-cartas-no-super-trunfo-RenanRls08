#include <stdio.h>

int main()
{
    int carta;
    char codigo[10];
    char estado[50];
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int pturisticos;

    printf("Digite sua carta: \n");
    scanf("%d", &carta);

    printf("Digite seu código: \n");
    scanf("%s", codigo);

    printf("Digite seu estado: \n");
    scanf("%s", estado);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade);

    printf("Digite sua população: \n");
    scanf("%f", &populacao);

    printf("Digite a área: \n");
    scanf("%f", area);

    printf("Digite seu PIB: \n");
    scanf("%f", &pib);

    printf("Digite pontos turísticos: \n");
    scanf("%d", &pturisticos);

    return 0;
}