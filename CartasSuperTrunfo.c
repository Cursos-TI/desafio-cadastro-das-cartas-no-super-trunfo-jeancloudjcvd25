#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.




    // dados da carta1 (variáeis)
    
    char NomeDoEstado1[30];
    char NomeDaCidade1[30];
    char CodigoDaCarta1[30];
    int Populacao1;
    int NumeroDePontosTuristicos1;
    float AreaEmKm1;
    float PiB1;

    // dados da carta2 (variáveis)
    
    char NomeDoEstado2[30];
    char NomeDaCidade2[30];
    char CodigoDaCarta2[30];
    int Populacao2;
    int NumeroDePontosTuristicos2;
    float AreaEmKm2;
    float PiB2;


    // Entrada  de Dados Da Carta 1
    printf("Escolha o Primeiro Estado: \n");
    scanf("%s", NomeDoEstado1);
    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", NomeDaCidade1);
    printf("Digite o Código Da Carta: \n");
    scanf("%s", CodigoDaCarta1);
    printf("Qual a População total?: \n");
    scanf("%d", &Populacao1);
    printf("Digite Quantos Pontos Turísticos Totais Tem Nessa Cidade: \n");
    scanf("%d", &NumeroDePontosTuristicos1);
    printf("Qual é a Área Dessa Cidade?: \n");
    scanf("%f", &AreaEmKm1);
    printf("Qual é o PIB?: \n");
    scanf("%f", &PiB1);

    printf("\n");// quebra de linha

    //Saída dos dados da carta 1
    printf("O Estado Escolhido Foi: %s\n", NomeDoEstado1);
    printf("A Cidade: %s\n", NomeDaCidade1);
    printf("O Código da Carta1 é: %s\n", CodigoDaCarta1);
    printf("E Sua População Total é De: %d Habitantes\n",Populacao1);
    printf("Tem %d Pontos Turísticos\n",NumeroDePontosTuristicos1);
    printf("Sua Área em Km² é de: %.2f\n",AreaEmKm1);
    printf("Seu PIB é de: %.2f\n",PiB1);

    printf("\n");// quebra de linha

    // Entrada de Dados da Carta 2
    printf("Escolha O Segundo Estado: \n");
    scanf("%s", NomeDoEstado2);
    printf("Digite o Nome Da Cidade: \n");
    scanf("%s", NomeDaCidade2);
    printf("Digite o Código Da Carta: \n");
    scanf("%s", CodigoDaCarta2);
    printf("Qual a População total?: \n");
    scanf("%d", &Populacao2);
    printf("Digite Quantos Pontos Turísticos Totais Tem Nessa Cidade: \n");
    scanf("%d", &NumeroDePontosTuristicos2);
    printf("Qual é a Área Dessa Cidade?: \n");
    scanf("%f", &AreaEmKm2);
    printf("Qual é o PIB?: \n");
    scanf("%f", &PiB2);

    printf("\n");// quebra de linha

    // Saída de dados da Carta 2
    printf("O Estado Escolhido Foi: %s\n", NomeDoEstado2);
    printf("A Cidade: %s\n", NomeDaCidade2);
    printf("O Código da Carta2 é: %s\n", CodigoDaCarta2);
    printf("E Sua População Tota2 é De: %d Habitantes\n",Populacao2);
    printf("Tem %d Pontos Turíscos\n",NumeroDePontosTuristicos2);
    printf("Sua Área em Km² é de: %.2f\n",AreaEmKm2);
    printf("Seu PIB é de: %.2f\n",PiB2);

    return 0;
}
