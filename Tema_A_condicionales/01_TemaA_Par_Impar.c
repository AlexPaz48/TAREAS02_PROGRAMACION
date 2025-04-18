
// **Número par o impar**: Escribe un programa que determine si un número ingresado por el usuario es par o impar.


#include <stdio.h>

    int main () 
{
    printf ("\n Este programa verifica si el numero es par o impar.\n");

    int numero;

        printf ("\n Ingresar un numero : \n");
        scanf ( "%d", &numero );

                if ( numero % 2 == 0 ) 
            {
                printf ("\n El numero %d es par \n", numero);
            } 
                    else 
                {
                    printf ("\n El numero %d es impar \n", numero);
                }

    printf ("\n Gracias, fin del programa.\n");
    
    return 0;
}