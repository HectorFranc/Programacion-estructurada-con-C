#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Te dare el menor de entre dos numeros");

    // Declaracion de variables
    float num1, num2;

    // Obtencion de los numeros
    printf("\nIngresa el primer numero: ");
    scanf("%f", &num1);
    printf("\nIngresa el segundo numero: ");
    scanf("%f", &num2);

    // Mostramos el menor de los numeros
    if (num1 <= num2)
        printf("\nEl numero menor es: %f", num1);
    else
        printf("\nEl numero menor es: %f", num2);

    return 0;
}
