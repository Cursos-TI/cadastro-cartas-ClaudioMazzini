#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades da carta 01
    char Estado01; //Uma letra de 'A' a 'H' representando um dos 8 estados
    char CodigoCarta01[4]; // A letra do estado seguida de um número de 01 a 04
    char Cidade01[50]; // Nome da cidade
    int População01; //Números de habitantes
    float Área01; // Área da cidade em km²
    float PIB01;  // Produto interno bruto da cidade
    int Numeros_de_pontos_turisticos01;
    float DensidadePopulacional01; // Nº de habitantes por km²
    float PIB_Per_Capita01;// Riqueza média por pessoa da cidade

    // Área para definição das variáveis para armazenar as propriedades das cidades da carta 02
    char Estado02; //Uma letra de 'A' a 'H' representando um dos 8 estados
    char CodigoCarta02[4]; // A letra do estado seguida de um número de 01 a 04
    char Cidade02[50]; // Nome da cidade
    int População02; //Números de habitantes
    float Área02; // Área da cidade em km²
    float PIB02;  // Produto interno bruto da cidade
    int Numeros_de_pontos_turisticos02; // Quantidade de pontos turísticos na cidade
    float DensidadePopulacional02; // Nº de habitantes por km²
    float PIB_Per_Capita02;// Riqueza média por pessoa da cidade

  // Área para entrada de dados da cidade da carta 01
    printf("Digite a letra inicial do seu Estado da cidade 01 de ('A - H'): ");
    scanf("%c", &Estado01);
    printf("Digite o codigo da carta da cidade 01: ");
    scanf(" %s", &CodigoCarta01);
    printf("Digite a cidade da carta 01: ");
    scanf(" %[^\n]", &Cidade01);
    printf("Digite o numero de habitantes da cidade 01: ");
    scanf(" %d", &População01);
    printf("Digite a área em quilômetos quadrados da cidade 01: ");
    scanf("%f", &Área01);
    printf("Digite o PIB da cidade 01: ");
    scanf("%f", &PIB01);
    printf("Digite o numero de pontos turisticos que existem na cidade 01: ");
    scanf("%d", &Numeros_de_pontos_turisticos01);

    // Área para entrada de dados da cidade da carta 02
    printf("\nDigite a letra inicial do seu Estado da cidade 02 de ('A - H'): ");
    scanf(" %c", &Estado02);
    printf("Digite o codigo da carta da cidade 02: ");
    scanf(" %s", &CodigoCarta02);
    printf("Digite a cidade da carta 02: ");
    scanf(" %[^\n]", &Cidade02);
    printf("Digite o numero de habitantes da cidade 02: ");
    scanf(" %d", &População02);
    printf("Digite a área em quilômetos quadrados da cidade 02: ");
    scanf("%f", &Área02);
    printf("Digite o PIB da cidade 02: ");
    scanf("%f", &PIB02);
    printf("Digite o numero de pontos turisticos que existem na cidade 02: ");
    scanf("%d", &Numeros_de_pontos_turisticos02);

     // Calculo da densidade populacional e PIB per capita carta 1
     DensidadePopulacional01 = População01/Área01;
     PIB_Per_Capita01 = População01/PIB01;

  // Calculo da densidade populacional e PIB per capita carta 2
     DensidadePopulacional02 = População02/Área02;
     PIB_Per_Capita02 = População02/PIB02;

  // Área para exibição dos dados da cidade da carta 01
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", Estado01);
    printf("Codigo da carta: %s\n", CodigoCarta01);
    printf("Cidade: %s\n", Cidade01);
    printf("Numeros de habitantes: %d\n", População01);
    printf("Área: %.3f km²\n", Área01);
    printf("PIB da cidade: %.2f bilhões de reais\n", PIB01);
    printf("Pontos turisticos: %d\n", Numeros_de_pontos_turisticos01);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional01);
    printf("PIB per Capita: %.2f reais\n", PIB_Per_Capita01);

      // Área para exibição dos dados da cidade da carta 02
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado02);
    printf("Codigo da carta: %s\n", CodigoCarta02);
    printf("Cidade: %s\n", Cidade02);
    printf("Numeros de habitantes: %d\n", População02);
    printf("Área: %.3f km²\n", Área02);
    printf("PIB da cidade: %.2f bilhões de reais\n", PIB02);
    printf("Pontos turisticos: %d\n", Numeros_de_pontos_turisticos02);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional02);
    printf("PIB per Capita: %.2f reais\n", PIB_Per_Capita02);


return 0;
} 
