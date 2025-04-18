// **Contador de dígitos**: Pide un número entero y cuenta cuántos dígitos 
// tiene usando un ciclo `while`.

#include <stdio.h>

int main ()
{
        int multiplicador = 1, contador =0;
        int numero;
        printf ("\n En este prgrama se contaron los digitos de un numero. \n");
        printf ("\n ingrese un numero entero : \n");
        scanf ("%d", numero);
        while (numero > 0)
        {
            numero = numero / 10;
            contador++;
        }
        printf ("\n El numero tiene %d digitos \n", contador);
        printf ("\n Fin del programa \n");


    return 0;        
}
