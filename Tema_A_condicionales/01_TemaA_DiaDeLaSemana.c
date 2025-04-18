// **Día de la semana**: Pide un número del 1 al 7 e imprime el día de la semana
// correspondiente (Ejemplo: 1 = Lunes).

#include <stdio.h>

int main() {
  printf("\n Este programa verifica el dia de la semana.\n");

  int dia;
  printf("\n Ingrese un numero del 1 al 7 y te mostrare"
         " que dia de la semana es: \n");
  scanf("%d", &dia);

  if (dia == 1) {
    printf("\n El numero %d de la semana es Lunes.\n", dia);
  }
  if (dia == 2) {
    printf("\n El numero %d de la semana es Martes.\n", dia);
  }
  if (dia == 3) {
    printf("\n El numero %d de la semana es Miercoles.\n", dia);
  }
  if (dia == 4) {
    printf("\n El numero %d de la semana es Jueves.\n", dia);
  }
  if (dia == 5) {
    printf("\n El numero %d de la semana es Viernes.\n", dia);
  }
  if (dia == 6) {
    printf("\n El numero %d de la semana es Sabado.\n", dia);
  }
  if (dia == 7) {
    printf("\n El numero %d de la semana es Domingo.\n", dia);
  } else if (dia < 1 || dia > 7) {
    printf("\n El numero ingresado no es valido.\n");
  }

  printf("\n Gracias, fin del programa.\n");

  return 0;
}
