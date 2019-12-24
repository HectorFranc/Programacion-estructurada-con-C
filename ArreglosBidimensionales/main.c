#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definicion de arreglo bidimensional
    int values[3][4] = {
    {1, 2, 1, 0},
    {1, 2, 3, 4},
    {1, 4, 5, 16},
    };

    // Mostrar la sumatoria de cada fila
    printf("La sumatoria de cada fila es:");
    printf("\nPrimera fila: %i", values[0][0]+values[0][1]+values[0][2]+values[0][3]);
    printf("\nSegunda fila: %i", values[1][0]+values[1][1]+values[1][2]+values[1][3]);
    printf("\nTercera fila: %i", values[2][0]+values[2][1]+values[2][2]+values[2][3]);
    return 0;
}
