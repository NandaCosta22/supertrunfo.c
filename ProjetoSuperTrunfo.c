#include <stdio.h>

int main() {
    unsigned long int populacao1, populacao2;
    int numero1, numero2, resultado, comparacao1, comparacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2;
    float densidade1, densidade2, per_capita1, per_capita2;
    float superpoder1, superpoder2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma_carta1 = 0, soma_carta2 = 0;
    char codigo1[30], codigo2[30];
    char cidade1[100], cidade2[100];
    char estado1, estado2;
    int variavel;

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

    printf("\nCarta %d\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %lu\n - Área: %.2f KM²\n - PIB: %.2f bilhões de reais\n - Pontos Turísticos: %d\n - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais \n",
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

    printf("\nComparacao de Areas \n");
    printf("Carta 1 (%s): %.2f km²\n", cidade1, area1);
    printf("Carta 2 (%s): %.2f km²\n", cidade2, area2);

    if ( area1> area2) {
        printf("Resultado: Carta 1 (%s) venceu! \n",cidade1);
    } else if (area1 < area2) {
        printf("Resultado: Carta 2 (%s) venceu! \n",cidade2);
    } 
     
     printf("\nEscolha o atributo a ser comparado:\n");
     printf("1. Nome do Estado\n");
     printf("2. População\n");
     printf("3. Área\n");
     printf("4. PIB\n");
     printf("5. Pontos Turísticos\n");
     printf("6. Densidade demográfica\n");
     scanf("%d", &variavel);
     
     switch(variavel) {
       case 1:
        printf("Cidade 1 - %s\n", cidade1);
        printf("Cidade 2 - %s\n", cidade2);
        printf("Não há comparação para este atributo\n");
        break;
       case 2:
        if (populacao1 > populacao2){
         printf(" São Paulo: %lu  \nRio de janeiro: %lu\n Resultado: São Paulo venceu!\n", populacao1, populacao2 );
        } else if (populacao2 > populacao1){
         printf(" São Paulo: %lu  \nRio de janeiro: %lu\n Resultado: Rio de Janeiro venceu!\n", populacao1, populacao2);
        } else {
            printf("Resultado: Empate!");
        }
        break;
       case 3:
        if ( area1 > area2) {
         printf("São Paulo: %.2f KM² \nRio de Janeiro: %.2f KM²\n Resultado: São Paulo venceu!\n", area1, area2);
        } else if (area2 > area1){
         printf("São Paulo: %.2f KM² \nRio de Janeiro: %.2f KM²\n Resultado: Rio de Janeiro venceu!\n", area1, area2);
        } else {
         printf("Resultado: Empate!");
        }
        break;
       case 4:
        if (PIB1 > PIB2){
        printf("São Paulo: %.2f bilhões de reais \nRio de Janeiro: %.2f bilhões de reais\n Resultado: São Paulo venceu!\n", PIB1, PIB2);
        } else if (PIB2 > PIB1){
        printf("São Paulo: %.2f bilhões de reais \nRio de Janeiro: %.2f bilhões de reais\n Resultado: Rio de Janeiro venceu!\n", PIB1, PIB2);
        } else {
        printf("Resultado: Empate!");
        }
        break;
       case 5:
        if (pontos_turisticos1 > pontos_turisticos2){
        printf("São Paulo: %d \nRio de Janeiro: %d\n Resultado: São Paulo venceu!\n", pontos_turisticos1, pontos_turisticos2);
        } else if (pontos_turisticos2 > pontos_turisticos1){
        printf("São Paulo: %d \nRio de Janeiro: %d\n Resultado: Rio de Janeiro venceu!\n", pontos_turisticos1, pontos_turisticos2);
        } else {
        printf("Resultado: Empate!");
        }
        break;
       case 6:
        if (densidade1 < densidade2){
        printf("São Paulo: %.2f hab/km² \nRio de Janeiro: %.2f hab/km²\n Resultado: São Paulo venceu!\n", densidade1, densidade2);
        } else if (densidade2 < densidade1){
        printf("São Paulo: %.2f hab/km² \nRio de Janeiro: %.2f hab/km²\n Resultado: Rio de Janeiro venceu!\n", densidade1, densidade2);
        } else {
        printf("Resultado: Empate!");  
        }
        break;
        default:
         printf("Opção Inválida!\n");
     }

    printf("\n***Comparação entre dois atributos***\n");
    printf("Você deve escolher dois atributos para comparar\n");

    printf("1. Número de pontos turísticos\n");
    printf("2. População\n");
    printf("3. PIB\n");
    printf("4. PIB per Capita\n");

    printf("Escolha o primeiro atributo: ");
    scanf("%d", &comparacao1);
    if (comparacao1 < 1 || comparacao1 > 4) {
        printf("Opção inválida! Encerrando comparação.\n");
        return 0;
    }

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &comparacao2);
    while (comparacao2 < 1 || comparacao2 > 4 || comparacao2 == comparacao1) {
        printf("Opção inválida! Escolha um atributo diferente do primeiro: ");
        scanf("%d", &comparacao2);
    }

    switch(comparacao1) {
        case 1: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
        case 2: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 3: valor1_carta1 = PIB1; valor1_carta2 = PIB2; break;
        case 4: valor1_carta1 = per_capita1; valor1_carta2 = per_capita2; break;
    }
    switch(comparacao2) {
        case 1: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
        case 2: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 3: valor2_carta1 = PIB1; valor2_carta2 = PIB2; break;
        case 4: valor2_carta1 = per_capita1; valor2_carta2 = per_capita2; break;
    }

    printf("\nComparação dos atributos:\n");

    printf("Atributo 1: %d\n", comparacao1);
    printf("Carta 1 (%s): %.2f\n", cidade1, valor1_carta1);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor1_carta2);
    int vencedor1 = (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta2 > valor1_carta1) ? 2 : 0;
    if (vencedor1 == 1) {
        printf("Vencedor do atributo 1: Carta 1 (%s)\n", cidade1);
    } else if (vencedor1 == 2) {
        printf("Vencedor do atributo 1: Carta 2 (%s)\n", cidade2);
    } else {
        printf("Empate no atributo 1!\n");
    }

    printf("\nAtributo 2: %d\n", comparacao2);
    printf("Carta 1 (%s): %.2f\n", cidade1, valor2_carta1);
    printf("Carta 2 (%s): %.2f\n", cidade2, valor2_carta2);
    int vencedor2 = (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta2 > valor2_carta1) ? 2 : 0;
    if (vencedor2 == 1) {
        printf("Vencedor do atributo 2: Carta 1 (%s)\n", cidade1);
    } else if (vencedor2 == 2) {
        printf("Vencedor do atributo 2: Carta 2 (%s)\n", cidade2);
    } else {
        printf("Empate no atributo 2!\n");
    }

    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", cidade1, soma_carta1);
    printf("Carta 2 (%s): %.2f\n", cidade2, soma_carta2);

    int vencedor_final = (soma_carta1 > soma_carta2) ? 1 : (soma_carta2 > soma_carta1) ? 2 : 0;
    if (vencedor_final == 1) {
        printf("Resultado final: Carta 1 (%s) venceu!\n", cidade1);
    } else if (vencedor_final == 2) {
        printf("Resultado final: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado final: Empate!\n");
    }

    return 0;
}

  

  
 
 

