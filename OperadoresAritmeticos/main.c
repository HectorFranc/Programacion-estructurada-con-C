#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion de variables
    float tempFahrenheit;
    float tempCelsius;

    // Obtener temperatura en Fahrenheit
    printf("Covertir grados Fahrenheit a Celsius \nIngresa la temperatura en Fahrenheit: ");
    scanf("%f", &tempFahrenheit);

    //Convertir Fahrenheit a Celsius
    tempCelsius = (tempFahrenheit - 32) * 5 / 9;

    // Imprimir la conversion
    printf("\n%f grados Fahrenheit son %f grados Celsius \n", tempFahrenheit, tempCelsius);

    return 0;
}
