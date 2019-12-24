#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Definicion de variables
    char word[50];

    // Obtenemos la palabra
    printf("Ingresa la palabra: ");
    gets(word);

    // Imprimimos la palabra el reves haciendo que el for comience en el ultimo elemento del array
    int wordLength = strlen(word);
    printf("La palabra al reves es: ");
    for(int i = wordLength - 1; i>=0; i--){
        printf("%c", word[i]);
    }

    return 0;
}
