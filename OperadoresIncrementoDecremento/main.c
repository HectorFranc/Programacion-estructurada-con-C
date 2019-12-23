#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion de variables
    int x;

    // Obtenemos el valor de la variable
    printf("Ingresa el valor de x: ");
    scanf("%i", &x);

    // Caculamos x % 5
    x %= 5;

    // Mostramos el resultado mas uno de incremento
    printf("El valor final de x es: %i", ++x);

    return 0;
}
