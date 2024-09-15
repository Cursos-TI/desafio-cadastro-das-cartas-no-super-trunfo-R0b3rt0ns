#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     // Declarando variaveis.
    char codigo_carta[3], nome_cidade[20];
    int populacao, qpontos_turisticos;
    float pib, area_cidade;

    //pedindo informações
    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area_cidade);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qpontos_turisticos);

    // Exibindo o resultado
    printf("Codigo da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade );
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area_cidade);
    printf("Pib: %f\n", pib);
    printf("Número de pontos turísticos: %d\n", qpontos_turisticos);

    return 0;
}
