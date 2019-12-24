#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion de variables
    int option;

    // Escoger una opcion
    printf("Una dia cualquiera\nEstas acostado y te dan ganas de hacer algo asi que: ");
    printf("\n1) Lees un libro de fantasia");
    printf("\n2) Te pones a estudiar programacion");
    printf("\n3) Sigues acostado\n>> ");
    scanf("%i", &option);

    // Presentar el resultado de la historia
    switch(option){
    case 1:
        printf("¡Oh no! No has aprendido nada nuevo hoy.");
        break;
    case 2:
        printf("¡El mundo es tuyo! Has aprendido algo nuevo hoy.");
        break;
    case 3:
        printf("Mehh. Sigues sin cambiar al mundo. ¡Pierdes!");
        break;
    default:
        printf("Elige una opcion valida");
        break;
    }

    return 0;
}
