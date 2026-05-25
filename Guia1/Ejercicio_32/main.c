#include <stdio.h>
#include <stdlib.h>
#define PIES 3.2808 // Constante de conversion metros a pies

int main()
{
    /*32. Elabore un programa que realice la conversión de metros a pies, donde 1 m = 3,2808 pies.
    Por lo tanto, el usuario proporcionará el dato de N m y el programa dirá a cuántos
    pies equivale.*/
    float metros, pies; // Variables para el metro y calcular los pies

    printf("CONVERSION DE METROS A PIES\n");

    printf("Ingrese la cantidad en metros: "); // Solicito los metros
    scanf("%f", &metros); // Guardo el valor ingresado

    pies = metros * PIES; // Convierto a pies

    printf("\n------------------------------");
    printf("\nMetros: %.2f m", metros); // Muestro los metros ingresados
    printf("\nEquivalente en pies: %.2f ft", pies);  // Muestro los pies calculados con aydua de la constante
    printf("\n------------------------------");

    printf("\n--FIN--"); // Final del programa
    return 0;
}
