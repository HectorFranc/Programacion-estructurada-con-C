#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Definicion de variables
     float califications[5][6] = {
        {7, 6, 8, 8, 7, 0},
        {8, 9, 7, 9, 6, 0},
        {7, 8, 9, 6, 7, 0},
        {7, 8, 8, 9, 9, 0},
        {8, 9, 9, 8, 7, 0}
     };

     // Calculamos el promedio de los primeros cinco elementos de cada fila y lo asignamos al sexto
     // Imprimimos los valores de cada fila
     for(int i = 0; i < 5; i++){
        printf("Los valores de la fila %i son: ", i);
        float sum = 0;
        for(int j = 0; j < 5; j++){
            printf("%f, ", califications[i][j]);
            sum += califications[i][j];
        }
        califications[i][5] = sum/5;
        printf("\nEl promedio de la fila %i es: %f\n", i, califications[i][5]);
     }
    return 0;
}
