#include <stdio.h>
#include <stdlib.h>

// Definicion de variables
char name[50];
int calf;

// aprobar() devuelve "Aprobado" o "Reprobado" segun la calificacion
void aprobar(int calf){
    if(calf >= 7){
        printf("Aprobado");
    } else {
        printf("Reprobado");
    }
}
int main()
{
    // Obtenemos nombre y calificacion del alumno
    printf("Nombre del alumno: ");
    gets(name);
    printf("Calificacion: ");
    scanf("%i", &calf);

    // Imprimimos el resultado
    printf("El alumno %s, con calificacion de %i, esta: ", name, calf);
    aprobar(calf);

    return 0;
}
