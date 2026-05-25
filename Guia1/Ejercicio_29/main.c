#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*29. Haga un programa que calcule intereses. Se pide que ingrese por teclado el porcentaje de
    interés mensual, el importe a considerar y el plazo en meses para mostrar los resultados
    en pantalla.*/
    float capital, tasa, interes, montoFinal; // Variables del importe inicial, tasa, e interes con monto final para calcular y mostrar
    int meses; // Variable para el plazo en meses

    printf("CALCULO DE INTERESES\n");

    printf("Ingrese el importe a invertir: "); // Solicito el capital
    scanf("%f", &capital); // Guardo el valor

    printf("Ingrese el interes mensual (en %%): "); // Solicito la tasa
    scanf("%f", &tasa); // Guardo el porcentaje

    printf("Ingrese el plazo en meses: "); // Solicito los meses
    scanf("%d", &meses); // Guardo el plazo

    interes = capital * (tasa / 100) * meses; // Convierto el porcentaje a decimal dividiendo por 100

    montoFinal = capital + interes; // Calculo el capital junto con el los intereses

    printf("\n------------------------------");
    printf("\nCapital inicial: %.2f", capital); // Muestro el capital
    printf("\nInteres generado: %.2f", interes); // Muestro los Intereses
    printf("\nMonto final: %.2f", montoFinal); // Muestro el monto final
    printf("\n------------------------------");

    printf("\n--FIN--"); // Final del programa
    return 0;
}
