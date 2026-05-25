#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*27. Un cierto comercio vende productos y aplica un 10 % de descuento. Escriba un programa que permita el ingreso del producto, su valor y que muestre en pantalla el precio
    de lista, el 10 % de dicho valor y el precio final con el descuento incluido    */
    char producto[50]; // Nombre del producto
    float precio, descuento, precioFinal; // Variables del precio y descuento, precioFinal para calcular

    printf("CALCULO DE DESCUENTO DEL 10%% EN PRODUCTOS\n");

    printf("Ingrese el nombre del producto: "); // Solicito el producto
    scanf("%s", producto); // Guardo el nombre (sin espacios)

    printf("Ingrese el precio del producto: "); // Solicito el precio
    scanf("%f", &precio); // Guardo el valor

    descuento = precio * 0.10; // Calculo el 10 po ciento de descuento
    precioFinal = precio - descuento; // Precio final con descuento

    printf("\n------------------------------");
    printf("\nProducto: %s", producto); // Muestro el producto principal
    printf("\nPrecio de lista: %.2f", precio); // Precio original
    printf("\nDescuento (10%%): %.2f", descuento); // Monto del descuento
    printf("\nPrecio final: %.2f", precioFinal); // Precio con descuento
    printf("\n------------------------------");

    printf("\n--FIN--"); // Final del programa
    return 0;
}
