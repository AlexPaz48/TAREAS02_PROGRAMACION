/**Mayor de tres números**: Pide al usuario tres números y muestra cuál es el
 * mayor.
 */
#include <stdio.h>

int main() {
  printf("\n Este programa verifica el mayor de tres numeros.\n");

  int X, Y, Z;

  printf("\n Ingresa el valor de X : \n");
  scanf("\n %d", &X);
  printf("\n Ingresa el valor de Y: \n");
  scanf("\n %d", &Y);
  printf("\n Ingresa el valor de Z : \n");
  scanf("\n %d", &Z);

  if (X > Y && X > Z) {
    printf("\n El mayor es X : %d\n", X);
  }
  if (Y > X && Y > Z) {
    printf("\n El Mayor es Y : %d\n", Y);
  }
  if (Z > X && Z > Y) {
    printf("\n El Mayor es Z : %d\n", Z);
  }

  printf("\n Gracias, fin del programa.\n");

  return 0;
}
