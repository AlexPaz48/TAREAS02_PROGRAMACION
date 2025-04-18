// *Tabla de multiplicar**: Solicita un número y muestra su tabla de multiplicar 
// del 1 al 10 usando un `while`.

#include <stdio.h>

    int main ()
{
    int numero, i = 1;
    
            printf ("\n En este programa se mostrara la tabla de multiplicar de un numero.\n");
            printf ("\n Ingrese un numero : \n");
            scanf ("%d", &numero);

            printf ("\n Tabla de multiplicar del %d : \n", numero);
            while (i <= 20)
        {
            printf ("%d x %d = %d \n", numero, i, numero * i);
            i++;
        }
            printf ("\n Fin del programa \n");        

    return 0;
}


