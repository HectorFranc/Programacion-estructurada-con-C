#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion de variables (arrayLength se obtine por consola del usuario)
    int arrayLength;
    printf("Ingresa la longitud del arreglo: ");
    scanf("%i", &arrayLength);
    int myArray[arrayLength];

    // Obtenemos valores del array
    printf("\nIngresa los valores del arreglo:");
    for(int i = 0; i < arrayLength; i++){
        printf("\nmyArray[%i]: ", i);
        scanf("%i", &myArray[i]);
    }

    // Buscamos el numero más grande
    int actualMax = myArray[0];
    for(int i = 1; i < arrayLength; i++){
        if(myArray[i] > actualMax)
            actualMax = myArray[i];
    }

    // Mostramos el mayor valor
    printf("\nEl mayor valor es: %i", actualMax);

    return 0;
}
