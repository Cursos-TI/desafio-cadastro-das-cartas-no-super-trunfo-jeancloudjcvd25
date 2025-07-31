#include <stdio.h>
#include <locale.h>
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

    // dados da carta1 (variáveis)
    char NomeDoEstado1[30];
    char NomeDaCidade1[30];
    char CodigoDaCarta1[30];
    unsigned long int Populacao1;
    int NumeroDePontosTuristicos1;
    float AreaEmKm1;
    float PiB1;
    float DensidadePopulacional1;
    float PIBPercapita1;
    float SuperPoderCarta1;

    // dados da carta2 (variáveis)
    char NomeDoEstado2[30];
    char NomeDaCidade2[30];
    char CodigoDaCarta2[30];
    unsigned long int Populacao2;
    int NumeroDePontosTuristicos2;
    float AreaEmKm2;
    float PiB2;
    float DensidadePopulacional2;
    float PIBPercapita2;
    float SuperPoderCarta2;

    // Entrada  de Dados Da Carta 1
    printf("Escolha o Primeiro Estado: \n");
    fgets(NomeDoEstado1, sizeof(NomeDoEstado1), stdin);
    printf("Digite o Nome Da Cidade: \n");
    fgets(NomeDaCidade1, sizeof(NomeDaCidade1), stdin);
    printf("Digite o Código Da Carta: \n");
    scanf("%s", CodigoDaCarta1);
    printf("Qual a População total?: \n");
    scanf("%lu", &Populacao1);
    printf("Digite Quantos Pontos Turísticos Totais Tem Nessa Cidade: \n");
    scanf("%d", &NumeroDePontosTuristicos1);
    printf("Qual é a Área Dessa Cidade?: \n");
    scanf("%f", &AreaEmKm1);
    printf("Qual é o PIB?: \n");
    scanf("%f", &PiB1);

    // calculos
    DensidadePopulacional1 = (float)Populacao1 / AreaEmKm1;
    PIBPercapita1 = (float)PiB1 / Populacao1;
    SuperPoderCarta1 = Populacao1 + AreaEmKm1 + PiB1 + NumeroDePontosTuristicos1 + DensidadePopulacional1 + PIBPercapita1;

    getchar(); // limpa o buffer antes do próximo fgets

    printf("\n"); // quebra de linha

    // Saída dos dados da carta 1
    printf("O Estado Escolhido Foi: %s\n", NomeDoEstado1);
    printf("A Cidade: %s\n", NomeDaCidade1);
    printf("O Código da Carta1 é: %s\n", CodigoDaCarta1);
    printf("E Sua População Total é De: %lu Habitantes\n", Populacao1);
    printf("Tem %d Pontos Turísticos\n", NumeroDePontosTuristicos1);
    printf("Sua Área é de: %.2f Km²\n", AreaEmKm1);
    printf("Seu PIB é de: %.2f\n", PiB1);
    printf("A Densidade Populacional De: %s É DE: %.2f hab/km²\n", NomeDaCidade1, DensidadePopulacional1);
    printf("E Seu PIB Per Capita é de: %.2f reais\n", PIBPercapita1);
    printf("O Super Poder da Carta 1 é: %.2f\n", SuperPoderCarta1);

    printf("\n"); // quebra de linha

    // Entrada de Dados da Carta 2
    printf("Escolha O Segundo Estado: \n");
    fgets(NomeDoEstado2, sizeof(NomeDoEstado2), stdin);
    printf("Digite o Nome Da Cidade: \n");
    fgets(NomeDaCidade2, sizeof(NomeDaCidade2), stdin);
    printf("Digite o Código Da Carta: \n");
    scanf("%s", CodigoDaCarta2);
    printf("Qual a População total?: \n");
    scanf("%lu", &Populacao2);
    printf("Digite Quantos Pontos Turísticos Totais Tem Nessa Cidade: \n");
    scanf("%d", &NumeroDePontosTuristicos2);
    printf("Qual é a Área Dessa Cidade?: \n");
    scanf("%f", &AreaEmKm2);
    printf("Qual é o PIB?: \n");
    scanf("%f", &PiB2);

    // calculos
    DensidadePopulacional2 = (float)Populacao2 / AreaEmKm2;
    PIBPercapita2 = (float)PiB2 / Populacao2;
    SuperPoderCarta2 = Populacao2 + AreaEmKm2 + PiB2 + NumeroDePontosTuristicos2 + DensidadePopulacional2 + PIBPercapita2;

    printf("\n"); // quebra de linha

    // Saída de dados da Carta 2
    printf("O Estado Escolhido Foi: %s\n", NomeDoEstado2);
    printf("A Cidade: %s\n", NomeDaCidade2);
    printf("O Código da Carta2 é: %s\n", CodigoDaCarta2);
    printf("E Sua População Total2 é De: %lu Habitantes\n", Populacao2);
    printf("Tem %d Pontos Turísticos\n", NumeroDePontosTuristicos2);
    printf("Sua Área é de: %.2f km²\n", AreaEmKm2);
    printf("Seu PIB é de: %.2f reais\n", PiB2);
    printf("A Densidade Populacional De: %s é de : %.2f hab/km²\n", NomeDaCidade2, DensidadePopulacional2);
    printf("E Seu PIB Per Capita é de: %.2f reais\n", PIBPercapita2);
    printf("O Super Poder da Carta 2 é: %.2f\n", SuperPoderCarta2);

    // Comparação dos Atributos das cartas
    if (Populacao1 > Populacao2)
    {
        printf("Carta 1 Venceu");
    }
    else if (Populacao1 < Populacao2)
    {
        printf("Carta 2 Venceu");
    }
    else if (AreaEmKm1 > AreaEmKm2)
    {
        printf("Carta 1 Venceu");
    }
    else if (AreaEmKm1 < AreaEmKm2)
    {
        printf("Carta 2 Venceu");
    }
    else if (PiB1 > PiB2)
    {
        printf("Carta 1 Venceu");
    }
    else if (PiB1 < PiB2)
    {
        printf("Carta 2 Venceu");
    }
    else if (NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2)
    {
        printf("Carta 1 Venceu");
    }
    else if (NumeroDePontosTuristicos1 < NumeroDePontosTuristicos2)
    {
        printf("Carta 2 Venceu");
    }
    else if (DensidadePopulacional1 > DensidadePopulacional2)
    {
        printf("Carta 1 Venceu");
    }
    else if (DensidadePopulacional1 < DensidadePopulacional2)
    {
        printf("Carta 2 Venceu");
    }
    else if (SuperPoderCarta1 > SuperPoderCarta2)
    {
        printf("Carta 1 Venceu");
    }
    else if (SuperPoderCarta1 < SuperPoderCarta2)
    {
        printf("Carta 2 Venceu");
    }
    else
    {
        printf("Empate!");
    }

    return 0;

   
}
