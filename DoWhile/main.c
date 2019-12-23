#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion de variables
    int n = 1;

    // Mostramos los primeros 100 numeros naturales (del 1 al 100)
    do{
        printf("%i\n", n);
        n++;
    } while (n <= 100);

    return 0;
}
