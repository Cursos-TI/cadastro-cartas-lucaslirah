#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, cidade[30], codigo[30];
    int populacao, numero_pontos_turisticos;
    float area, pib;

    // Área para entrada de dados - carta 1

    printf("++++ CADASTRO DE CARTAS ++++\n");
    printf("+++++++++ CARTA 1 ++++++++++\n");

    printf("Digite uma letra de 'A' a 'H' para um dos oito estados: ");
    scanf("%s", &estado);
    printf("Digite o nome de uma cidade do Estado: ");
    scanf("%s", &cidade);
    printf("Digite o código da carta de 01 a 04: ");
    scanf("%s", &codigo);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numero_pontos_turisticos);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib);
        
    printf("++++++++++++++++++++++++++++\n");

    // declaração e atribuição de variável para o código da carta
    char codigo_da_carta[4];

    codigo_da_carta[0] = estado;
    codigo_da_carta[1] = codigo[0];
    codigo_da_carta[2] = codigo[1];
    codigo_da_carta[3] = '\0'; // final da cadeia de caracteres

    // Área para exibição dos dados da cidade - carta 1
    
    printf("++++ CADASTRO DE CARTAS ++++\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    // outra maneira de visualizar o código da carta, mas não armazenado em variável para uso posterior
    // printf("Código da Carta: %c%s\n", estado, codigo);
    printf("População: %d\n", populacao);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib);
    printf("++++++++++++++++++++++++++++\n");

    // Área para entrada de dados - carta 2
    // Fluxo do programa em cadastro -> visualizar para permitir comodidade ao usuário e melhor verificação de erros
    
    printf("++++ CADASTRO DE CARTAS ++++\n");
    printf("+++++++++ CARTA 2 ++++++++++\n");
    
    printf("Digite uma letra de 'A' a 'H' para um dos oito estados: ");
    scanf("%s", &estado);
    printf("Digite o nome de uma cidade do Estado: ");
    scanf("%s", &cidade);
    printf("Digite o código da carta de 01 a 04: ");
    scanf("%s", &codigo);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &numero_pontos_turisticos);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &pib);
    
    printf("++++++++++++++++++++++++++++\n");
        
    char codigo_da_carta[4];

    codigo_da_carta[0] = estado;
    codigo_da_carta[1] = codigo[0];
    codigo_da_carta[2] = codigo[1];
    codigo_da_carta[3] = '\0';

    // Área para exibição dos dados da cidade - carta 2
    
    printf("++++ CADASTRO DE CARTAS ++++\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("População: %d\n", populacao);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib);
    
    printf("++++++++++++++++++++++++++++\n");
    
    return 0;
};