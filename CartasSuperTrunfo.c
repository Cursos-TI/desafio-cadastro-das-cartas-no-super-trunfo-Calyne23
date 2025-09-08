
   #include <stdio.h>
   
   
   
   
   
   
   
   int main (){  char estado [50]; 
    char codigo [40];
    char cidade [30];
    double populacao, area, pib1;
    int turistico;
    double dp1, PIBpc1;
     


/*
          - O que preciso fazer?

  1: Calcular a densidade populacional usando ( double/ float)
 - 2: Como fazer isso?
 
 - 3: Irei pegar a variavel população e dividir pela área da cidade
 
  4: Calcular o PIB per capita usando ( double ou float)
 - 5: como fazer isso?

 - 7: Variavel PIB e divide pela variavel População

// Adicionar novas variaveis "Super poder, (Para somar a popu, area, pib, pib pc, dp'invertida' e numeros de pontos trc)".

// Add uma nova variavel "Resultado" para Popu, area, pib e pontos trc, para comparar as cartas .

// Comparação=  se o resultado da comparação for 1, a carta 1 ganhou.
//              se o rsultado for 0, a carta 2 ganhou.

// Comparação da DP: quem tiver a DP menor ganha.

// Armazenar a comparação em uma variavel.


*/

// Exibir o resultado de cada e o resultado final.


    char estado [50]; 
    char codigo [40];
    char cidade [30];
    unsigned long int populacao1;
    double area1, pib1;
    int turistico1;
    double dp1, PIBpc1;
    long double superPoder1;

     
           printf("\nDESAFIO SUPER TRUNFO \n");


     printf("\nJogador: 1\n");

    printf("\nDigite seu estado: \n");
    scanf("%24s", estado);
    scanf("%s", estado);

    printf("Digite seu codigo: \n");
    scanf("%24s", codigo);
    scanf("%s", codigo);

    printf("Digite nome da sua cidade: \n");
    scanf("%24s", cidade);
    scanf("%s", cidade);

    printf("Digite a populacao: \n");
    scanf("%lf", &populacao);
    scanf("%ld", &populacao1);

    printf("Digite a area em KM: \n");
    scanf("%lf", &area);
    scanf("%lf", &area1);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);

    printf("Digite a quantidade pontos turisticos: \n");
    scanf("%d", &turistico);
    scanf("%d", &turistico1);



    printf("\nCarta do jogador 1: \n");
    printf("Estado: ");
    printf(" %10s\n", estado);
    printf("Codigo: ");
    printf(" %3s\n", codigo);
    printf("Nome da Cidade: ");
    printf(" %9s\n", cidade);
    printf("Populacao: %.0lf\n", populacao);
    printf("Area em KM: %.2lf\n", area);
    printf("PIB: %.2lf\n", pib1);
    printf("Pontos Turisticos: %d\n", turistico);
    

    dp1 = populacao / area;
     printf("A densidade populacional em Km² é de: %.2lf\n", dp1);
    char Estado [50]; 
    char Codigo [40];
    char Cidade [30];
    unsigned long int Populacao2;
    double Area2, Pib;
    int Turistico2;
    double DCP2, PibPC2;
    long double SuperPoder2;

     printf("\nJogador: 2 \n");

   PIBpc1 = pib1 / populacao;
    printf("O PIB Per Capita é de: %.2lf\n", PIBpc1);
    printf("\nDigite seu estado: \n");
    scanf("%s", Estado);


    printf("Digite seu codigo: \n");
    scanf("%s", Codigo);
   

  
   /*
          - O que preciso fazer?
    printf("Digite nome da sua cidade: \n");
    scanf("%s", Cidade);
   

  1: Calcular a densidade populacional usando ( double/ float)
 - 2: Como fazer isso?
 
 - 3: Irei pegar a variavel população e dividir pela área da cidade
 
  4: Calcular o PIB per capita usando ( double ou float)
 - 5: como fazer isso?
    printf("Digite a populacao: \n");
    scanf("%ld", &Populacao2);

 - 7: Variavel PIB e divide pela variavel População
    printf("Digite a area em KM: \n");
    scanf("%lf", &Area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &Pib);

    printf("Digite a quantidade pontos turisticos: \n");
    scanf("%d", &Turistico2);

   // Calcular densidade populacional (área / população)




*/



    printf("\n\nCarta do jogador 1: \n\n");
    printf("Estado: ");
    printf(" %s\n", estado);
    printf("Codigo: ");
    printf(" %s\n", codigo);
    printf("Nome da Cidade: ");
    printf(" %s\n", cidade);

    char Estado [50]; 
    char Codigo [40];
    char Cidade [30];
    double Populacao, Area, Pib;
    int Turistico;
    double DCP, PibPC;
    printf("Populacao: %d", populacao1);
    printf("=\t%d\n", populacao1 > Populacao2);

    printf("Area em KM: %.2f", area1);
    printf("=\t%d\n", area1 > Area2);

    printf("PIB: %.6f", pib1);
    printf("=\t%d\n", pib1 > Pib);

    printf("Pontos Turisticos: %d", turistico1);
    printf("=\t%d\n", turistico1 > Turistico2);

     printf("\nJogador: 2 \n");
    dp1 = populacao1 / area1;
     printf("A densidade populacional em Km² é de: %.2f", dp1);
     printf("=\t%d\n", dp1 < DCP2);
    
     PIBpc1 = pib1 / populacao1;
    printf("O PIB Per Capita é de: %.6f", PIBpc1);
    printf("=\t%d\n", PIBpc1 > PibPC2 );

    printf("\nDigite seu estado: \n");
    scanf("%25s", Estado);
    superPoder1 = (double) populacao1 + area1 + pib1 + turistico1 + dp1;
    printf("Super Poder: =\t%d\n", superPoder1 > SuperPoder2);


    printf("Digite seu codigo: \n");
    scanf("%25s", Codigo);
   

    printf("Digite nome da sua cidade: \n");
    scanf("%25s", Cidade);
   

    printf("Digite a populacao: \n");
    scanf("%lf", &Populacao);

    printf("Digite a area em KM: \n");
    scanf("%lf", &Area);

    printf("Digite o PIB: \n");
    scanf("%lf", &Pib);

    printf("Digite a quantidade pontos turisticos: \n");
    scanf("%d", &Turistico);
    




    printf("\nCarta do jogador: 2 \n");
    printf("\n\nCarta do jogador: 2 \n\n");
    printf("Estado: ");
    printf(" %10s\n", Estado);
    printf(" %s\n", Estado);
    printf("Codigo: ");
    printf(" %3s\n", Codigo);
    printf(" %9s\n", Cidade);
    printf("Populacao: %.0lf\n", Populacao);
    printf("Area em KM: %.2lf\n", Area);
    printf("PIB: %.2lf\n", Pib);
    printf("Pontos Turisticos: %d\n", Turistico);
    printf(" %s\n", Codigo);
    printf("Cidade: ");
    printf(" %s\n", Cidade);

    printf("Populacao: %d", Populacao2);
    printf("=\t%d\n", Populacao2 > populacao1);
      
    printf("Area em KM: %.2f", Area2);
    printf("=\t%d\n", Area2 > area1);

    printf("PIB: %.6f", Pib);
    printf("=\t%d\n", Pib > pib1);

    printf("Pontos Turisticos: %d", Turistico2);
    printf("=\t%d\n", Turistico2 > turistico1);

      DCP2 = Populacao2 / Area2;
     printf("A Densidade Populacional em Km² é de: %.2f", DCP2);
     printf("=\t%d\n", DCP2 < dp1);
 
    PibPC2 = Pib / Populacao2;
    printf("O PIB Per Capita é de: %.6f", PibPC2);
    printf("=\t%d\n", PibPC2 > PIBpc1 );

    SuperPoder2 = (double) Populacao2 + Area2 + Pib + Turistico2 + DCP2;
    printf("Super Poder: =\t%d\n", SuperPoder2 > superPoder1);



    DCP = Populacao / Area;
     printf("A Densidade Populacional em Km² é de: %.2lf\n", dp1);

    PibPC = Pib / Populacao;
    printf("O PIB Per Capita é de: %.2lf\n", PibPC);




   return 0;

  }
