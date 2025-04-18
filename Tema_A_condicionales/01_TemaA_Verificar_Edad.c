// **Verificación de edad**: Escribe un programa que solicite la edad del
// usuario y determine si es mayor de edad (>18).

#include <stdio.h>

int main() {

  printf("Este programa verifica si eres mayor o menor de edad. \n");

  int Edad;
  printf("\n ingrese su edad : \n");
  scanf("%d", &Edad);

  if (Edad > 18) {
    printf("\n Eres Mayor de edad. \n");
  } else {
    printf("\n No eres mayor de edad. \n");
  }

  printf("\n Gracias, fin del programa.\n");
  return 0;
}