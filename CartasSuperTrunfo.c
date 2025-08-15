#include <stdio.h>

int main()
{

  char estado1 = 'A';
  char codigo1[5] = "A01";
  char nome1[9] = "SaoPaulo";
  int populaçao1 = 12325000;
  int numero1 = 50;
  float area1 = 1521.11;
  float PIB1 = 699.280;

  printf("DESAFIO DE CARTAS SUPER TRUNFO");
  printf("\nCarta 1: \n");

  printf("\nSeu estado é:");
  scanf("%c", &estado1);

  printf("Seu codigo é:  \n");
  scanf("%s", codigo1);

  printf("O nome da  cidade é: \n");
  scanf("%s", nome1);

  printf("A populaçao da cidade é:  \n");
  scanf("%d\a", &populaçao1);

  printf("O numero de pontos turisticos é: \n");
  scanf("%d", &numero1);

  printf("Sua area em km é: \n");
  scanf("%f", &area1);

  printf("O seu PIB é: \n");
  scanf("%.2f", &PIB1);

  printf("\nSeu estado é: A");
  printf("%c\n", estado1);
  printf("Seu codigo é: \n");
  printf("%s\n", codigo1);
  printf("O nome da cidade é: \n");
  printf("%.9s\n", nome1);
  printf("A populaçao da cidade é: \n");
  printf("%i\n", populaçao1);
  printf("O numero de pontos turisticos é: \n");
  printf("%d\n", numero1);
  printf("Sua area em km é: \n");
  printf("%f\n", area1);
  printf("O seu PIB é: \n");
  printf("%.2f\n", PIB1);

  char Estado2 = 'B';
  char Codigo2[4] = "B02";
  char Nome2[15] = "RiodeJaneiro";
  int Populaçao2 = 67.48000;
  int Numero2 = 30;
  float Area2 = 1200.25;
  float Pib2 = 300.50;

  printf("\n Carta 2:\n");

  printf("O nome do Estado é: \n");
  scanf(" %c", &Estado2);

  printf("O nome do codigo é: \n");
  scanf(" %s", Codigo2);

  printf("O nome da cidade é: \n");
  scanf(" %s", Nome2);

  printf("A populaçao da cidade é: \n");
  scanf("%d", &Populaçao2);

  printf("O numero de pontos turisticos é: \n");
  scanf("%d", &Numero2);

  printf("Sua area em km é: \n");
  scanf("%f", &Area2);

  printf("O seu pib é: \n");
  scanf("%.2f", &Pib2);

  printf("\nO nome do Estado é: \n");
  printf("%c\n", Estado2);
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

  return 0;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Tes
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um p

