// **Clasificación de calificaciones**: Solicita una calificación (0-100) y muestra si es "Aprobado", "Reprobado" o "Sobresaliente".

#include <stdio.h>
int main()
{
    printf ( "\n Este programa mostrara si su calificacion es reprobatoria, aprobatoria o sobresaliente.\n");

    int notas;
        printf ( "\n Por favor ingrese su  calificacion : \n" );
        scanf ( "%d", &notas );

                if ( notas >= 90 && notas <= 100 )
            {
                printf (" \n Su calificacion es sobresaliente.\n");
            }
                if ( notas >= 60 && notas <= 89 )
            {
                printf ("\n Su calificacion es aprobatoria. \n");
            }
                if ( notas >= 0 && notas <=59 )
            {
                printf ("\n Su calificacion es reprobatoria.\n");
            }
                    else if (notas < 0 || notas > 100 )
                {
                    printf (" \n La calificacion ingresada no es valida. \n");   
                }
    printf ("\n Gracias, fin del programa.\n");

    return 0;
}