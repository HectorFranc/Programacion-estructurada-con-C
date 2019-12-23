#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definicion de variables
    int num = 5;
    int guess;

    // Obtenermos el valor del intento de adivinar actual
    printf("Dime cual numero estoy pensando entre 1 y 10: ");
    scanf("%i", &guess);

    // Decidimos si es correcta la respuesta
    if(guess == num)
        printf("Adivinaste");
    else
        printf("Ese no es. ¡Perdiste!");

    return 0;
}
