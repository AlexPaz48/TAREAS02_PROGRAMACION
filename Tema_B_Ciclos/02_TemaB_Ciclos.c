//  1. **Suma de los primeros N números**: Pide un número N y calcula la suma de los primeros N números naturales usando un ciclo `for`.

#include <stdio.h>

int main ()     

{
    printf ("\n En este programa se sumaran los primeros N numeros naturales.\n");
            int N, i , suma = 0;
            
            printf ("\n Ingrese un numero N : \n");
            scanf ("%d", &N);

            for (i = 1; i <= N; i++)
        {
            suma += i   ;
        }
            printf ("\n La suma de los primeros %d numeros es : %d \n", N, suma);
            printf ("\n Fin del programa \n");


 
    return 0;
}