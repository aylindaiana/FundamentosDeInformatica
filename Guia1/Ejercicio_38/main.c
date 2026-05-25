#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*38. Modifique el programa anterior, pero esta vez aplique un descuento del 10 % si paga
    de contado. El programa deberá mostrar el total a abonar, y el total con descuento si
    fuera de contado.*/

    const int yerba = 65;     // Precio de la yerba
    const int azucar = 25;    // Precio del azucar
    const int pan = 28;       // Precio del pan por kg
    const int gaseosa = 24;   // Precio de la gaseosa

    int c_yerba, c_azucar, c_pan, c_gaseosa, total; // Variables para las cantidades y el total para mostrar el calculo
    float total_descuento; // Variable para el total con descuento

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

    total_descuento = total * 0.9; // Aplico 10 por ciento de descuento

    printf("\n------------------------------");
    printf("\nTotal a pagar: $%d", total); // Muestro el total sin descuento
    printf("\nTotal con descuento (10%%): $%.2f", total_descuento); // Muestro total con descuento, uso doble % para que muestre en terminal
    printf("\n------------------------------");

    printf("\n--FIN--");
    return 0;
}
