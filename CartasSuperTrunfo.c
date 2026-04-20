#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_carta1, cidade_carta1[30], codigo_carta1[30];
    int populacao_carta1, numero_pontos_turisticos_carta1;
    float area_carta1, pib_carta1;

    //declaração de variáveis para carta 2 - operadores relacionais
    char estado_carta2, cidade_carta2[30], codigo_carta2[30];
    int populacao_carta2, numero_pontos_turisticos_carta2;
    float area_carta2, pib_carta2;

    // Área para entrada de dados - carta 1

    printf("++++ CADASTRO DE CARTAS ++++\n");
    printf("+++++++++ CARTA 1 ++++++++++\n");

    printf("Digite uma letra de 'A' a 'H' para um dos oito estados: ");
    scanf("%s", &estado_carta1);
    printf("Digite o nome de uma cidade do Estado: ");
    scanf("%s", cidade_carta1);
    printf("Digite o código da carta de 01 a 04: ");
    scanf("%s", codigo_carta1);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao_carta1);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numero_pontos_turisticos_carta1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area_carta1);
    printf("Digite o PIB da cidade em bilhões (ex. 699.28): "); // solicitar ao usuário abreviado para cálculo posterior
    scanf("%f", &pib_carta1);
        
    printf("++++++++++++++++++++++++++++\n");

    // declaração e atribuição de variável para o código da carta
    char codigo_da_carta_1[4];

    codigo_da_carta_1[0] = estado_carta1;
    codigo_da_carta_1[1] = codigo_carta1[0];
    codigo_da_carta_1[2] = codigo_carta1[1];
    codigo_da_carta_1[3] = '\0'; // final da cadeia de caracteres

    // cálculo de densidade populacional e pib per capita
    float densidade_populacional_carta1, pib_per_capita_carta1;

    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    // calcular com o pib real
    pib_per_capita_carta1 = (pib_carta1 * 1000000000) / (float)populacao_carta1;

    // Área para exibição dos dados da cidade - carta 1
    
    printf("++++ CADASTRO DE CARTAS ++++\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Nome da Cidade: %s\n", cidade_carta1);
    printf("Código da Carta: %s\n", codigo_da_carta_1);
    // outra maneira de visualizar o código da carta, mas não armazenado em variável para uso posterior
    // printf("Código da Carta: %c%s\n", estado, codigo);
    printf("População: %d\n", populacao_carta1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_carta1);
    printf("Área da cidade: %.2f km²\n", area_carta1);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib_carta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1);
    printf("++++++++++++++++++++++++++++\n");

    // Área para entrada de dados - carta 2
    // Fluxo do programa em cadastro -> visualizar para permitir comodidade ao usuário e melhor verificação de erros
    
    printf("++++ CADASTRO DE CARTAS ++++\n");
    printf("+++++++++ CARTA 2 ++++++++++\n");
    
    printf("Digite uma letra de 'A' a 'H' para um dos oito estados: ");
    scanf("%s", &estado_carta2);
    printf("Digite o nome de uma cidade do Estado: ");
    scanf("%s", cidade_carta2);
    printf("Digite o código da carta de 01 a 04: ");
    scanf("%s", codigo_carta2);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao_carta2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numero_pontos_turisticos_carta2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area_carta2);
    printf("Digite o PIB da cidade em bilhões (ex. 699.28): ");
    scanf("%f", &pib_carta2);
    
    printf("++++++++++++++++++++++++++++\n");

    char codigo_da_carta_2[4];

    codigo_da_carta_2[0] = estado_carta2;
    codigo_da_carta_2[1] = codigo_carta2[0];
    codigo_da_carta_2[2] = codigo_carta2[1];
    codigo_da_carta_2[3] = '\0';
        
    float densidade_populacional_carta2, pib_per_capita_carta2;

    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (pib_carta2 * 1000000000) / (float)populacao_carta2;

    // Área para exibição dos dados da cidade - carta 2
    
    printf("++++ CADASTRO DE CARTAS ++++\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Nome da Cidade: %s\n", cidade_carta2);
    printf("Código da Carta: %s\n", codigo_da_carta_2);
    printf("População: %d\n", populacao_carta2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_carta2);
    printf("Área da cidade: %.2f km²\n", area_carta2);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib_carta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2);
    printf("++++++++++++++++++++++++++++\n");
    
    printf("+++ COMPARAÇÃO DE CARTAS +++\n");
    printf("População: ");
    printf("Área: ");
    printf("PIB: ");
    printf("Pontos Turísticos: ");
    printf("Densidade Populacional: ");
    printf("PIB per Capita: ");
    printf("Super Poder: ");

    return 0;
};