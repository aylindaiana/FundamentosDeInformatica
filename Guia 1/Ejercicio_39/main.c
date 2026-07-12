#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*39. Repita el programa 38, pero esta vez considere sumar el IVA del 21 % a cada producto.
    La salida en pantalla deberá mostrarse así:
    Yerba = 65$
    iva: 21 %
    cantidad: x
    Subtotal: x*65$ (+21 %).
    ...
    TOTAL A PAGAR: X$ */

    const int yerba = 65;     // Precio de la yerba
    const int azucar = 25;    // Precio del azucar
    const int pan = 28;       // Precio del pan por kg
    const int gaseosa = 24;   // Precio de la gaseosa

    int c_yerba, c_azucar, c_pan, c_gaseosa; // Variables para cantidades
    float sub_yerba, sub_azucar, sub_pan, sub_gaseosa, total; // Subtotales con IVA

    printf("CALCULO DE COMPRA CON IVA\n");
    printf("\n------------------------------");

    printf("\nIngrese cantidad de yerba: "); // Solicito cantidad de la yerba
    scanf("%d", &c_yerba);

    printf("\nIngrese cantidad de azucar: "); // Solicito cantidad de la azucar
    scanf("%d", &c_azucar);

    printf("\nIngrese cantidad de kg de pan: "); // Solicito cantidad del pan
    scanf("%d", &c_pan);

    printf("\nIngrese cantidad de gaseosas: "); // Solicito cantidad de gaseosas
    scanf("%d", &c_gaseosa);

    sub_yerba = (c_yerba * yerba) * 1.21; // Calculo subtotales con IVA
    sub_azucar = (c_azucar * azucar) * 1.21;
    sub_pan = (c_pan * pan) * 1.21;
    sub_gaseosa = (c_gaseosa * gaseosa) * 1.21;

    total = sub_yerba + sub_azucar + sub_pan + sub_gaseosa; // Calculo del total

    printf("\n------------------------------");
    printf("\nYerba = $%d", yerba);
    printf("\nIVA: 21%%");
    printf("\nCantidad: %d", c_yerba);
    printf("\nSubtotal: $%.2f\n", sub_yerba);

    printf("\nAzucar = $%d", azucar);
    printf("\nIVA: 21%%");
    printf("\nCantidad: %d", c_azucar);
    printf("\nSubtotal: $%.2f\n", sub_azucar);

    printf("\nPan = $%d", pan);
    printf("\nIVA: 21%%");
    printf("\nCantidad: %d", c_pan);
    printf("\nSubtotal: $%.2f\n", sub_pan);

    printf("\nGaseosa = $%d", gaseosa);
    printf("\nIVA: 21%%");
    printf("\nCantidad: %d", c_gaseosa);
    printf("\nSubtotal: $%.2f\n", sub_gaseosa);

    printf("\n------------------------------");
    printf("\nTOTAL A PAGAR: $%.2f", total); // Muestro total final con IVA
    printf("\n------------------------------");

    printf("\n--FIN--");
    return 0;
}
