#include <stdio.h>
#include <string.h>

int main () {
  char placa[7];
  printf("Digite a placa do carro: ");
  scanf("%s", placa);
  printf("\n");
  printf("A placa do carro e: %s\n", placa);
  return 0;
}