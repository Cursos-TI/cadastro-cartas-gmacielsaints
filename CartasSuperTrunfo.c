#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char Estado1[20], Estado2[20], Codigo1[4], Codigo2[4], Cidade1[20], Cidade2[20];
  int Populacao1, Populacao2, Tour1, Tour2;
  float Area1, Area2, PIB1, PIB2, Dens1, Dens2, PPC1, PPC2;

// COLETANDO INFORMAÇÕES DA CARTA 1:
printf("Infome o Estado 1:\n");
scanf("%s", Estado1);
printf("Infome o Codigo da Carta 1:\n");
scanf("%3s", Codigo1);
printf("Infome a Cidade 1:\n");
scanf("%s", Cidade1);
printf("Infome a Populacao da cidade 1:\n");
scanf("%d", &Populacao1);  
printf("Infome a Quantidade de Pontos Turisticos da cidade 1:\n");
scanf("%d", &Tour1);
printf("Infome o PIB da cidade 1:\n");
scanf("%f", &PIB1);
printf("Infome a Area da cidade 1 (km2):\n");
scanf("%f", &Area1);
Dens1 = Populacao1 / Area1;
PPC1 = PIB1 / Populacao1;

// COLETANDO INFORMAÇÕES DA CARTA 2:
printf("Infome o Estado 2:\n");
scanf("%s", Estado2);
printf("Infome o Codigo da Carta 2:\n");
scanf("%3s", Codigo2);
printf("Infome a Cidade 2:\n");
scanf("%s", Cidade2);
printf("Infome a Populacao da cidade 2:\n");
scanf("%d", &Populacao2);  
printf("Infome a Quantidade de Pontos Turisticos da cidade 2:\n");
scanf("%d", &Tour2);
printf("Infome o PIB da cidade 2:\n");
scanf("%f", &PIB2);
printf("Infome a Area da cidade 2 (km2):\n");
scanf("%f", &Area2);
Dens2 = Populacao2 / Area2;
PPC2 = PIB2 / Populacao2;


  // Área para exibição dos dados da cidade

  // EXIBINDO INFORMAÇÕES DA CARTA 1:
  printf("A Carta 01 possui as seguintes caracteristicas:\n");
  printf("Estado: %s\n"
        "Codigo: %3s\n"
        "Cidade: %s\n"
        "Populacao: %d\n"
        "Pontos Turisticos: %d\n"
        "PIB Total: %.2f\n"
        "PIB per capta da Cidade: %.2f\n"
        "Area da Cidade (km2): %.3f\n"
        "Densidade Demografica da Cidade(Pessoa(as) por km2): %.2f\n",
        Estado1, Codigo1, Cidade1, Populacao1, Tour1, PIB1, PPC1, Area1, Dens1);

 // EXIBINDO INFORMAÇÕES DA CARTA 2:
  printf("A Carta 02 possui as seguintes caracteristicas:\n");
  printf("Estado: %s\n"
        "Codigo: %3s\n"
        "Cidade: %s\n"
        "Populacao: %d\n"
        "Pontos Turisticos: %d\n"
        "PIB Total: %.2f\n"
        "PIB per capta da Cidade: %.2f\n"
        "Area da Cidade (km2): %.3f\n"
        "Densidade Demografica da Cidade(Pessoa(as) por km2): %.2f\n",
        Estado2, Codigo2, Cidade2, Populacao2, Tour2, PIB2, PPC2, Area2, Dens2);

return 0;
} 