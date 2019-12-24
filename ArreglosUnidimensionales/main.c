#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion del arreglo
    int val[5];

    // Obtenemos valores del arrgelo
    printf("Ingresa los valores del array");
    printf("\nval[0]: ");
    scanf("%i", &val[0]);
    printf("\nval[1]: ");
    scanf("%i", &val[1]);
    printf("\nval[2]: ");
    scanf("%i", &val[2]);
    printf("\nval[3]: ");
    scanf("%i", &val[3]);
    printf("\nval[4]: ");
    scanf("%i", &val[4]);

    // Mostar el resultado de multiplicar los valores del array
    printf("El resultado es: %i", val[0]*val[1]*val[2]*val[3]*val[4]);
    return 0;
}
