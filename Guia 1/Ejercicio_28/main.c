#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio, iva, precioFinal; // Variables precio, IVA y el precio final para calcular

    printf("CALCULO DEL PRECIO FINAL CON IVA (21%%)\n");

    printf("Ingrese el precio del producto: "); // Solicito el precio
    scanf("%f", &precio); // Guardo el valor ingresado

    iva = precio * 0.21; // Calculo el IVA
    precioFinal = precio + iva; // Calculo el precio final con IVA

    printf("\n------------------------------");
    printf("\nPrecio sin IVA: %.2f", precio); // Muestro precio base
    printf("\nIVA (21%%): %.2f", iva); // Muestro el IVA
    printf("\nPrecio final: %.2f", precioFinal); // Muestro total
    printf("\n------------------------------");

    printf("\n--FIN--"); // Final del programa
    return 0;
}
