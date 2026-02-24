#include <stdio.h>

int main (){
}
char estado;
char codigo [40];
char cidade [50];
int populaçao;
float area;
float pib;
int pontos;

printf ("estado (A a H):");
scanf (" %c", &estado);
printf("codigo da carta (ex: A01):");
scanf("%s", codigo);
printf("Nome da cidade: ");
scanf(" %[^\n]", Cidade);
printf(Populçaõ: ");
scanf ("%d", &populaçao);
printf("area (km2): ");
scanf ("%f", &area);
printf("pib: ");
scanf ("%f", &pib);
print ("numeros de pontos turisticos: ");
scanf("%d", &pontos);


  // Área para exibição dos dados da cidade
printf("\n---  Dados da carta---\n");
printf ("estado: %c\n", estado);
printf ("codigo: %s\n", codigo);
printf ("cidade: %s\n", cidade);
printf ("População: %d\n", populaçao);
printf ("area: %.2f km2\n", area);
printf ("Pib: %.2f\n", pib);
printf ("pontos turisticos: %d\n", pontos);
return 0;
} 
