#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

#include <stdio.h>

int main() {
    char codigo_da_cidade[100], codigo_da_cidade2[100];
    char nome[100], nome2[100];
    int populacao, populacao2;
    int area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, pib_per_capita, densidade_populacional2, pib_per_capita2;

    printf("Qual o código da cidade? : ");
    scanf("%s", codigo_da_cidade);  

    printf("Qual o nome da cidade? : ");
    scanf("%s", nome);

    printf("Qual a população da cidade? : ");
    scanf("%d", &populacao);

    printf("Qual a área da cidade? : ");
    scanf("%d", &area);

    printf("Qual o PIB da cidade? : ");
    scanf("%f", &pib);

    printf("Qual número de pontos turísticos da cidade? : ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (float)populacao / area;
    pib_per_capita = pib  / populacao;

    printf("Qual o código da cidade2? : ");
    scanf("%s", codigo_da_cidade2);  

    printf("Qual o nome da cidade2? : ");
    scanf("%s", nome2);

    printf("Qual a população da cidade2? : ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade2? : ");
    scanf("%d", &area2);

    printf("Qual o PIB da cidade2? : ");
    scanf("%f", &pib2);

    printf("Qual número de pontos turísticos da cidade2? : ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2  / populacao2;

    printf("\n--- Dados da Cidade 1---\n");
    printf("Código: %s\nNome: %s\nPopulação: %d\nÁrea: %d km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", 
           codigo_da_cidade, nome, populacao, area, pib, pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);

    printf("\n--- Dados da Cidade 2---\n");
    printf("Código: %s\nNome: %s\nPopulação: %d\nÁrea: %d km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", 
           codigo_da_cidade2, nome, populacao2, area2, pib2, pontos_turisticos2);
    printf("Densidade Populacional2: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita2: R$ %.2f\n", pib_per_capita2);

    return 0;
}
