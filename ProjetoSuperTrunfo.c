#include <stdio.h>

int main() {
    unsigned long int populacao1, populacao2;
    int numero1, numero2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2;
    float densidade1, densidade2, per_capita1, per_capita2;
    float superpoder1, superpoder2;
    char codigo1[30], codigo2[30];
    char cidade1[100], cidade2[100];
    char estado1, estado2;

    // Leitura dos dados da Carta 1
    printf("Digite a populacao: \n");
    scanf("%lu", &populacao1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a opcao do Estado (letra): \n");
    scanf(" %c", &estado1);

    printf("Digite o numero da Carta: \n");
    scanf("%d", &numero1);

    printf("Digite a area: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o codigo: \n");
    scanf("%s", codigo1);
    getchar();

    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    per_capita1 = (PIB1 * 1000000000.0) / populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + per_capita1 + (1.0 / densidade1);

    printf("\nCarta %d\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %lu\n - Área: %.2f KM²\n - PIB: %.2f bilhões de reais\n - Pontos Turísticos: %d\n - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n",
        numero1, estado1, codigo1, cidade1, populacao1, area1, PIB1, pontos_turisticos1, densidade1, per_capita1);

    // Leitura dos dados da Carta 2
    printf("\nDigite a populacao: \n");
    scanf("%lu", &populacao2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a opcao do Estado (letra): \n");
    scanf(" %c", &estado2);

    printf("Digite o numero da Carta: \n");
    scanf("%d", &numero2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o codigo: \n");
    scanf("%s", codigo2);
    getchar();

    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade2);

    densidade2 = populacao2 / area2;
    per_capita2 = (PIB2 * 1000000000.0) / populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + per_capita2 + (1.0 / densidade2);

    printf("\nCarta %d\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %lu\n - Área: %.2f KM²\n - PIB: %.2f bilhões de reais\n - Pontos Turísticos: %d\n - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n",
     numero2, estado2, codigo2, cidade2, populacao2, area2, PIB2, pontos_turisticos2, densidade2, per_capita2);


    printf("\n***Comparação das Cartas***\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (per_capita1 > per_capita2) ? 1 : 2, (per_capita1 > per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2));

    printf("Comparação de Areas:\n");
    printf("Carta 1 (%s): %.2f km²\n", cidade1, area1);
    printf("Carta 2 (%s): %.2f km²\n", cidade2, area2);

    if ( area1> area2) {
        printf("Resultado: Carta 1 (%s) venceu! \n",cidade1);
    } else if (area1 < area2) {
        printf("Resultado: Carta 2 (%s) venceu! \n",cidade2);
    } 
    
    return 0;

    return 0;
}
  

  
 
 

