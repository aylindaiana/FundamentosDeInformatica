#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*26. Escriba un programa que permita introducir por teclado el importe de un depósito
    bancario que se desea realizar, y que muestre por pantalla cuánto obtendría en caso
    de depositar por 3 meses (3 % mensual), 6 meses (3,2 % mensual) o 12 meses (3,9 % mensual). El programa debe mostrar en pantalla los valores al final del depósito, según
    los plazos mencionados, con su respectivo interés calculado.*/

    float deposito, monto3, monto6, monto12; // Variables para el monto iniciacial y luego para el calculo

    printf("CALCULO DE DEPOSITO BANCARIO CON INTERESES\n");

    printf("Ingrese el importe del deposito: "); // Solicito el monto
    scanf("%f", &deposito); // Guardo el valor ingresado

    monto3 = deposito * (1 + (0.03 * 3)); // 3 meses con 3 mensual
    monto6 = deposito * (1 + (0.032 * 6)); // 6 meses con 3.2 mensual
    monto12 = deposito * (1 + (0.039 * 12)); // 12 meses con 3.9 mensual

    printf("\n------------------------------");
    printf("\nMonto a los 3 meses (3%% mensual): %.2f", monto3); // Muestro los 3 meses con 3 mensual
    printf("\nMonto a los 6 meses (3.2%% mensual): %.2f", monto6); // Muestro los 6 meses con 3,2 mensual
    printf("\nMonto a los 12 meses (3.9%% mensual): %.2f", monto12); // Muestro los 12 meses con 3.9 mensual
    printf("\n------------------------------");

    printf("\n--FIN--"); // Fin del programa
    return 0;
}
