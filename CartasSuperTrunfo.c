#include <stdio.h>

int main()
{

    char estado1[20];
    char codigo1[20];
    char nome1[20];
    float populaçao1;
    int numero1;
    float area1;
    float PIB1;
    float Densidade1;
    float PIB3;

    // densidade populacional (float) = populaçao / por area ;
    // PIB per capita (float) = PIB  / pela populaçao;

    printf("\nDESAFIO DE CARTAS SUPER TRUNFO\n");
    printf("\nCarta 1: \n");

    printf("\nSeu estado é:\n");
    scanf("%s", estado1);

    printf("Seu codigo é:  \n");
    scanf("%s", codigo1);

    printf("O nome da  cidade é: \n");
    scanf("%s", nome1);

    printf("A populaçao da cidade é:  \n");
    scanf("%f", &populaçao1);

    printf("O numero de pontos turisticos é: \n");
    scanf("%d", &numero1);

    printf("Sua area em km é: \n");
    scanf("%f", &area1);

    printf("O seu PIB é: \n");
    scanf("%f", &PIB1);

    printf("\nSua carta é: \n");
    printf("Seu estado é: \n");
    printf("%s\n", estado1);
    printf("Seu codigo é: \n");
    printf("%s\n", codigo1);
    printf("O nome da cidade é: \n");
    printf("%.9s\n", nome1);
    printf("A populaçao da cidade é: \n");
    printf("%f\n", populaçao1);
    printf("O numero de pontos turisticos é: \n");
    printf("%d\n", numero1);
    printf("Sua area em km é: \n");
    printf("%f\n", area1);
    printf("O seu PIB é: \n");
    printf("%.2f\n", PIB1);

    
    Densidade1 =  (populaçao1 / area1);
    printf("A Densidade Demográfica por km² é: %.2f\n", Densidade1);

    PIB3 = (float) (PIB1 / populaçao1);
    printf("O PIB Per-Capita é: %.2f\n", PIB3);


    char Estado2[25];
    char Codigo2[25];
    char Nome2[25];
    float Populaçao2;
    int Numero2;
    float Area2;
    float Pib2;
    float Densidade2;
    float PIB4;

    // densidade populacional (float) = populaçao / por area ;
    // PIB per capita (float) = PIB  / pela populaçao;

    printf("\n Carta 2:\n");

    printf("O nome do Estado é: \n");
    scanf("%s", Estado2);

    printf("O nome do codigo é: \n");
    scanf("%s", Codigo2);

    printf("O nome da cidade é: \n");
    scanf("%s", Nome2);

    printf("A populaçao da cidade é: \n");
    scanf("%f", &Populaçao2);

    printf("O numero de pontos turisticos é: \n");
    scanf("%d", &Numero2);

    printf("Sua area em km é: \n");
    scanf("%f", &Area2);

    printf("O seu pib é: \n");
    scanf("%f", &Pib2);

    printf("\nO nome do Estado é: \n");
    printf("%s\n", Estado2);
    printf("O nome do codigo é: \n");
    printf("%.3s\n", Codigo2);
    printf("O nome da cidade é: \n");
    printf("%.12s\n", Nome2);
    printf("A populaçao da cidade é: \n");
    printf("%f\n", Populaçao2);
    printf("O numero de pontos turisticos é: \n");
    printf("%d\n", Numero2);
    printf("Sua area em km é: \n");
    printf("%f\n", Area2);
    printf("O seu pib é: \n");
    printf("%.2f\n", Pib2);

    

     Densidade2 = (float) (Populaçao2 / Area2);
    printf("A Densidade Demográfica por km² é: %.2f\n", Densidade2);

    PIB4 = (float) (Pib2 / Populaçao2);
    printf("O PIB Per-Capita é: %.2f", PIB4);
    
    return 0;
}


