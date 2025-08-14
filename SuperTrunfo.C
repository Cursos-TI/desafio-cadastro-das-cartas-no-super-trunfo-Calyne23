#include <stdio.h>

int main()
{
   

  char estado = 'A';
  char codigo[5] = "A01";
  char nome[8] = "SaoPaulo";
  int populaçao = 12325000;
  int numero = 50;
  float area = 1521.11;
  float PIB = 699.280;

   printf("DESAFIO SUPER TRUNFO:\n");

  printf("\nCarta 1: \n");

  printf("\nSeu estado é:");
  scanf("%c", &estado);

  printf("Seu codigo é:  \n");
  scanf("%s", codigo);

  printf("O nome da  cidade é: \n");
  scanf("%s", nome);

  printf("A populaçao da cidade é:  \n");
  scanf("%d\a", &populaçao);

  printf("O numero de pontos turisticos é: \n");
  scanf("%f", &numero);

  printf("Sua area em km é: \n");
  scanf("%f", &area);

  printf("O seu PIB é: \n");
  scanf("%f", &PIB);

  printf("\nSeu estado é: A");
  printf("%c\n", estado);
  printf("Seu codigo é: \n");
  printf("%s\n", codigo);
  printf("O nome da cidade é: \n");
  printf("%.8s\n", nome);
  printf("A populaçao da cidade é: \n");
  printf("%i\n", populaçao);
  printf("O numero de pontos turisticos é: \n");
  printf("%d\n", numero);
  printf("Sua area em km é: \n");
  printf("%f\n", area);
  printf("O seu PIB é: \n");
  printf("%.6f\n", PIB);

  char Estado = 'B';
  char Codigo[3] = "B02";
  char Nome[15] = "RiodeJaneiro";
  double Populaçao = 67.48000;
  int Numero = 30;
  float Area = 1200.25;
  float Pib = 300.50;

  printf("\n Carta 2:\n");

  printf("O nome do Estado é: \n");
  scanf(" %c", &Estado);

  printf("O nome do codigo é: \n");
  scanf(" %s", Codigo);

  printf("O nome da cidade é: \n");
  scanf(" %s", Nome);

  printf("A populaçao da cidade é: \n");
  scanf("%f", &Populaçao);

  printf("O numero de pontos turisticos é: \n");
  scanf("%d", &Numero);

  printf("Sua area em km é: \n");
  scanf("%f", &Area);

  printf("O seu pib é: \n");
  scanf("%f", &Pib);

  printf("\nO nome do Estado é: \n");
  printf("%c\n", Estado);
  printf("O nome do codigo é: \n");
  printf("%.3s\n", Codigo);
  printf("O nome da cidade é: \n");
  printf("%.12s\n", Nome);
  printf("A populaçao da cidade é: \n");
  printf("%f\n", Populaçao);
  printf("O numero de pontos turisticos é: \n");
  printf("%d\n", Numero);
  printf("Sua area em km é: \n");
  printf("%f\n", Area);
  printf("O seu pib é: \n");
  printf("%f\n", Pib);

  return 0;
}
