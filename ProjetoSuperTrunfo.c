#include <stdio.h>

  int main() {

  int populacao, número_de_pontos_turísticos;
  float área, PIB;
  char código [10];
  char cidade [30];
  char opcao;
  char nome [100];
  float densidade_populacional, per_capita;

 printf("Digite a população: \n");
 scanf("%d", &populacao);

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
 scanf(" %s[^\n]s", cidade);

 densidade_populacional = (float) populacao / área;
 per_capita = ( PIB * 1000000000.0) / populacao;
 
 printf("%s\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Área: %.2f KM² \n - PIB: %f bilhões de reais \n - Números de Pontos Turísticos: %d\n - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n",nome, opcao, código, cidade, populacao, área, PIB, número_de_pontos_turísticos, densidade_populacional, per_capita);

   return 0;


  }
 
  

  
 
 

