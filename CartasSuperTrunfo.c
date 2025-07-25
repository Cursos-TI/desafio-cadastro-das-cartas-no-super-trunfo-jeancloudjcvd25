#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // dados da carta1
    char NomeDoEstado1[30];
    char NomeDaCidade1[30];
    char CodigoDaCarta1[30];
    int Populacao1;
    int NumeroDePontosTuristicos1;
    float AreaEmKm1;
    float PiB1;


    // dados da cart2
    char NomeDoEstado2[30];
    char NomeDaCidade2[30];
    char CodigoDaCarta2[30];
    int Populacao2;
    int NumeroDePontosTuristicos2;
    float AreaEmKm2;
    float PiB2;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Entrada e saída de Dados Da Carta 1
    printf("Escolha o Primeiro Estado: \n");
    scanf("%s", NomeDoEstado1);
    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", NomeDaCidade1);
    printf("Digite o Código Da Carta: \n");
    scanf("%s", CodigoDaCarta1);
    printf("Qual a População total?: \n");
    scanf("%d", &Populacao1);
    printf("Digite Quantos Pontos Turisticos Totais Tem Nessa Cidade: \n");
    scanf("%d", &NumeroDePontosTuristicos1);
    printf("Qual é a Área em km² Dessa Cidade?: \n");
    scanf("%f", &AreaEmKm1);
    printf("Qual é o PIB?: \n");
    scanf("%f", &PiB1);
    printf("\n");


    // Entrada e Sída de Dados da Carta 2
    printf("Escolha o Segundo Estado: \n");
    scanf("%s", NomeDoEstado2);
    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", NomeDaCidade2);
    printf("Digite o Código Da Carta: \n");
    scanf("%s", CodigoDaCarta2);
    printf("Qual a População total?: \n");
    scanf("%d", &Populacao2);
    printf("Digite Quantos Pontos Turisticos Totais Tem Nessa Cidade: \n");
    scanf("%d", &NumeroDePontosTuristicos2);
    printf("Qual é a Área em km² Dessa Cidade?: \n");
    scanf("%f", &AreaEmKm2);
    printf("Qual é o PIB?: \n");
    scanf("%f", &PiB2);

    return 0;
}
