#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades da carta 01
    char Estado01;
    char CodigoCarta01[4];
    char Cidade01[50];
    int População01;
    float Área01;
    float PIB01;
    int Numeros_de_pontos_turisticos01;

    // Área para definição das variáveis para armazenar as propriedades das cidades da carta 02
    char Estado02;
    char CodigoCarta02[4];
    char Cidade02[50];
    int População02;
    float Área02;
    float PIB02;
    int Numeros_de_pontos_turisticos02;

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

  // Área para exibição dos dados da cidade da carta 01
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", Estado01);
    printf("Codigo da carta: %s\n", CodigoCarta01);
    printf("Cidade: %s\n", Cidade01);
    printf("Numeros de habitantes: %d\n", População01);
    printf("Área: %.3f km²\n", Área01);
    printf("PIB da cidade: %.2f bilhões de reais\n", PIB01);
    printf("Pontos turisticos: %d\n", Numeros_de_pontos_turisticos01);

      // Área para exibição dos dados da cidade da carta 02
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado02);
    printf("Codigo da carta: %s\n", CodigoCarta02);
    printf("Cidade: %s\n", Cidade02);
    printf("Numeros de habitantes: %d\n", População02);
    printf("Área: %.3f km²\n", Área02);
    printf("PIB da cidade: %.2f bilhões de reais\n", PIB02);
    printf("Pontos turisticos: %d\n", Numeros_de_pontos_turisticos02);


return 0;
} 
