#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion de variables
    int nFibonacci, a, b, c;

    // Obtener hasta que numero de Fibonacci
    printf("Secuencia de Fibonacci\n¿Hasta que numero de Fibonacci quieres llegar?\n>> ");
    scanf("%i", &nFibonacci);

    //Mostrar la secuencia de Fibonacci
    for(int i = 1; i <= nFibonacci; i++){
        if(i == 1){
            printf("1, ");
            a = 1;
        } else if(i == 2){
            printf("1, ");
            b = 1;
        } else {
            c = a + b;
            a = b;
            b =c;
            printf("%i, ", c);
        }
    }
    printf("...");

    return 0;
}
