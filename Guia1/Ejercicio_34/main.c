#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*34. Escribir un programa que calcule la hipotenusa de un triángulo rectángulo.*/
    float cateto1, cateto2, hipotenusa; // Variable para los catetos y la hipotenusa para calcular

    printf("CALCULO DE LA HIPOTENUSA DE UN TRIANGULO RECTANGULO\n");

    printf("Ingrese el primer cateto: "); // Solicito cateto 1
    scanf("%f", &cateto1); // Guardo el valor

    printf("Ingrese el segundo cateto: "); // Solicito cateto2
    scanf("%f", &cateto2); // Guardo el valor

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2)); // Calculo aplicando pitagoras la raiz del cat1 al cuadrado más el segundo al cuadrado

    printf("\n------------------------------");
    printf("\nCateto 1: %.2f", cateto1); // Muestro primer cateto
    printf("\nCateto 2: %.2f", cateto2); // Muestro segundo cateto
    printf("\nHipotenusa: %.2f", hipotenusa); // Muestro hipotenusa calculada
    printf("\n------------------------------");

    printf("\n--FIN--"); // Fianl del programa
    return 0;
}
