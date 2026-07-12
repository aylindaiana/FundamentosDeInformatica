#include <stdio.h>
#include <stdlib.h>
#define PULGADA 0.39737 // Constante de conversion cm a pulgadas

int main()
{
    /*31. Elabore un programa que realice la conversión de cm a pulgadas, donde 1 cm =
    0,39737 pulgadas. Por lo tanto, el usuario proporcionará el dato de N cm y el programa dirá a cuántas pulgadas es equivalente.
    */
    float cm, pulgadas; // Variables para centimetros y calcular la pulgada

    printf("CONVERSION DE CM A PULGADAS\n");

    printf("Ingrese la cantidad en centimetros: "); // Solicito los cm
    scanf("%f", &cm); // Guardo el valor ingresado

    pulgadas = cm * PULGADA; // Convierto a pulgadas

    printf("\n------------------------------");
    printf("\nCentimetros: %.2f cm", cm); // Muestro los centimetros
    printf("\nEquivalente en pulgadas: %.2f in", pulgadas); // Muestro las pulgadas
    printf("\n------------------------------");

    printf("\n--FIN--"); //Final del programa
    return 0;
}
