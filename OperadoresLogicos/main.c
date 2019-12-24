#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion de variables
    int calificacion;

    // Obtencion de la calificacion
    printf("Ingresa tu calificacion (entre 1 y 100) para saber si aprobaste: ");
    scanf("%i", &calificacion);

    // Mostramos si aprobo
    if (calificacion < 60)
        printf("Estas reprobado");
    else if (calificacion <= 90)
        printf("Aprobaste");
    else
        printf("Aprobaste :)");

    return 0;
}
