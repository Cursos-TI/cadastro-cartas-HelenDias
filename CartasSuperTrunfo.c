#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades
// utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das
  // cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  char estate_1[1];
  char card_code_1[10];
  char name_1[50];
  unsigned long int population_1;
  float area_1;
  float pib_1;
  int touristic_points_1;
  float density_1;
  float pib_per_capita_1;
  float super_poder_1;

  char estate_2[1];
  char card_code_2[10];
  char name_2[50];
  unsigned long int population_2;
  float area_2;
  float pib_2;
  int touristic_points_2;
  float density_2;
  float pib_per_capita_2;
  float super_poder_2;

  printf("Digite o estado:\n");
  scanf("%s", estate_1);
  printf("Digite o código da carta:\n");
  scanf("%s", card_code_1);
  printf("Digite o nome da cidade:\n");
  scanf("%s", name_1);
  printf("Digite a população:\n");
  scanf("%lu", &population_1);
  printf("Digite a área da cidade:\n");
  scanf("%f", &area_1);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib_1);
  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &touristic_points_1);

  density_1 = (float)population_1 / area_1;
  pib_per_capita_1 = pib_1 / (float)population_1;
  super_poder_1 = (float)population_1 + area_1 + pib_1 + (float)touristic_points_1 + pib_per_capita_1 + (1.0f / density_1);

  printf("\nAgora a segunda cidade\n");

  printf("\nDigite o estado:\n");
  scanf("%s", estate_2);
  printf("Digite o código da carta:\n");
  scanf("%s", card_code_2);
  printf("Digite o nome da cidade:\n");
  scanf("%s", name_2);
  printf("Digite a população:\n");
  scanf("%lu", &population_2);
  printf("Digite a área da cidade:\n");
  scanf("%f", &area_2);
  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib_2);
  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &touristic_points_2);

  density_2 = (float)population_2 / area_2;
  pib_per_capita_2 = pib_2 / (float)population_2;
  super_poder_2 = (float)population_2 + area_2 + pib_2 + (float)touristic_points_2 + pib_per_capita_2 + (1.0f / density_2);

  printf("\nAqui está o resumo\n");

  printf("\nCarta 1:"
         "\nEstado: %s"
         "\nCódigo: %s"
         "\nNome da Cidade: %s"
         "\nPopulação: %lu"
         "\nÁrea: %.2f km²\n"
         "PIB: %.2f bilhões de reais"
         "\nNúmero de Pontos Turísticos: %d"
         "\nDensidade: %.2f hab/km²"
         "\nPIB per capita: %.2f"
         "\nSuper Poder: %.2f\n",
         estate_1, card_code_1, name_1, population_1, area_1, pib_1,
         touristic_points_1, density_1, pib_per_capita_1, super_poder_1);

  printf("\nCarta 2:"
         "\nEstado: %s"
         "\nCódigo: %s"
         "\nNome da Cidade: %s"
         "\nPopulação: %lu"
         "\nÁrea: %.2f km²\n"
         "PIB: %.2f bilhões de reais"
         "\nNúmero de Pontos Turísticos: %d"
         "\nDensidade: %.2f hab/km²"
         "\nPIB per capita: %.2f"
         "\nSuper Poder: %.2f\n",
         estate_2, card_code_2, name_2, population_2, area_2, pib_2,
         touristic_points_2, density_2, pib_per_capita_2, super_poder_2);

  printf("\nComparação de Cartas:\n");
  printf("População: Carta %d venceu (%d)\n", (population_1 > population_2) ? 1 : 2, population_1 > population_2);
  printf("Área: Carta %d venceu (%d)\n", (area_1 > area_2) ? 1 : 2, area_1 > area_2);
  printf("PIB: Carta %d venceu (%d)\n", (pib_1 > pib_2) ? 1 : 2, pib_1 > pib_2);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", (touristic_points_1 > touristic_points_2) ? 1 : 2, touristic_points_1 > touristic_points_2);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", (density_1 < density_2) ? 1 : 2, density_1 < density_2);
  printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita_1 > pib_per_capita_2) ? 1 : 2, pib_per_capita_1 > pib_per_capita_2);
  printf("Super Poder: Carta %d venceu (%d)\n", (super_poder_1 > super_poder_2) ? 1 : 2, super_poder_1 > super_poder_2);

  return 0;
}
