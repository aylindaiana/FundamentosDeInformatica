#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*37. Se conocen los siguientes datos:
    Yerba = 65$
    Azúcar = 25$
    Kg de Pan = 28$
    Gaseosa = 24$
    Se pide que elabore un programa de forma tal que se ingresen por teclado las cantidades
    de cada producto, y al final muestre cuánto se debe pagar en total.*/
    // Constantes globales son varibles fijas que no van a cambiar
    const int yerba = 65;     // Precio de la yerba
    const int azucar = 25;    // Precio del azucar
    const int pan = 28;       // Precio del pan por kg
    const int gaseosa = 24;   // Precio de la gaseosa

    int c_yerba, c_azucar, c_pan, c_gaseosa, total; // Variables para las cantidades y el total para mostrar el calculo

    printf("CALCULO DE COMPRA\n");
    printf("\n------------------------------");

    printf("\nIngrese cantidad de yerba: "); // Solicito cantidad de la yerba
    scanf("%d", &c_yerba); // Guardo el valor

    printf("\nIngrese cantidad de azucar: "); // Solicito cantidad de la ayucar
    scanf("%d", &c_azucar); // Guardo el valor

    printf("\nIngrese cantidad de kg de pan: "); // Solicito cantidad de la pan
    scanf("%d", &c_pan); // Guardo el valor

    printf("\nIngrese cantidad de gaseosas: "); // Solicito cantidad de la gaseosas
    scanf("%d", &c_gaseosa); // Guardo el valor

    total = (c_yerba * yerba) + (c_azucar * azucar) + (c_pan * pan) + (c_gaseosa * gaseosa); // Calculo del total

    printf("\n------------------------------");
    printf("\nTotal a pagar: $%d", total); // Muestro el total final
    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del programa

    return 0;
}
