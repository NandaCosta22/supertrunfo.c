#include <stdio.h>

  int main() {

  int população, número_de_pontos_turísticos;
  float área, PIB;
  char código [10];
  char cidade [30];
  char opcao;
  char nome [50];


 printf("Digite a população: \n");
 scanf("%d", &população);

 printf("Digite o número de pontos turísticos: \n");
 scanf("%d", &número_de_pontos_turísticos);

 printf("Digite a opção do Estado: \n");
 scanf(" %c", &opcao);

 printf("Digite o nome da Carta: \n");
 scanf(" %s", nome);

 printf("Digite a Área: \n");
 scanf(" %f", &área);

 printf("Digite o PIB: \n");
 scanf(" %f", &PIB);

 printf("Digite o código: \n");
 scanf(" %s", &código);

 printf("Digite a cidade: \n");
 scanf(" %[^\n]s", cidade);

 printf("Carta 2: \n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - Área: %f KM² \n - PIB: %f bilhões de reais \n - Números de Pontos Turísticos: %d\n", opcao,código,cidade,área,PIB,número_de_pontos_turísticos);


   return 0;


  }
 
 

