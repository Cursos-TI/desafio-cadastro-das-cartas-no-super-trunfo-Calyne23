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

  printf("DESAFIO DE CARTAS SUPER TRUNFO");
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
  scanf("%d", &numero);

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

