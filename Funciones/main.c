#include <stdio.h>
#include <stdlib.h>
float exponente(float base, int exponente){
    // Calculamos el resultado multiplicando "base" las veces que indique "exponente"
    float result = 1;
    for(int i = 0; i < exponente; i++){
        result *= base;
    }
    return result;
}

void dolaresAPesos(){
    // Declaracion de variables
    char convert;
    float cantidad;

    // Obtener eleccion y cantidad de la moneda
    printf("\nSi quieres convertir dolares a pesos presiona P\nSi quieres convertir pesos a dolares presiona D\n>> ");
    scanf("%c", &convert);
    printf("Ingresa la cantidad: ");
    scanf("%f", &cantidad);

    // Hacemos la conversion segun sea el caso y la imprimimos
    switch(convert){
        case 'P':
            printf("%f dolares son %f pesos", cantidad, cantidad * 20);
            break;
        case 'D':
            printf("%f pesos son %f dolares", cantidad, cantidad / 20);
            break;
    }
    //Mostramos el cambio actual
    printf("\nCambio actual: 20 pesos = 1 dolar");
}

int main()
{
    // Ejemplos de uso de las anteriores funciones
    printf("%f", exponente(4, 4));
    dolaresAPesos();

    return 0;
}
