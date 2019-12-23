
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaracion de variables
    float radio;
    float altura;
    float areaBase;
    float volumenCilindro;

    //Obtenemos los valores de las variables
    printf("Calculemos el volumen de un cilindro \nIngresa el valor del radio de la base: ");
    scanf("%f", &radio);
    printf("Ingresa el valor de la altura del cilindro: ");
    scanf("%f", &altura);

    // Calculamos el area y volumen
    areaBase = 3.1416 * radio * radio;
    volumenCilindro = areaBase * altura;

    // Imprimimos el resultado
    printf("El area de la base es: %f \n", areaBase);
    printf("El volumen del cilindro es: %f \n", volumenCilindro);

    return 0;
}
