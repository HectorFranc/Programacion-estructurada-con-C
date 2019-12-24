#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definicion de variables
    int x;
    int y;
    int swap;

    // Obtenemos el valor de ambas variables
    printf("Ingresa el valor de x: ");
    scanf("%i", &x);
    printf("Ingresa el valor de y: ");
    scanf("%i", &y);

    // Intercambiamos el valor de las variables guardando en swap temporalmente el valor de x
    swap = x;
    x = y;
    y = swap;

    // Mostramos el valor de las variables intercambiadas
    printf("El valor intercambiado de del entero x es: %i \n", x);
    printf("El valor intercambiado de del entero y es: %i \n", y);

    return 0;
}
