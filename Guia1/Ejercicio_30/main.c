#include <stdio.h>
#include <stdlib.h>
#define INTERES_MENSUAL 2.5 // Constante definida por el programa

int main()
{
    /*30. Modificar el programa anterior, considerando que ahora el interés es una constante
    definida en el programa y es del 2.5 % mensual. Se pide que ingrese el importe y el
    plazo y se muestre el importe al final del período (importe inicial + interés del 2.5 %
    mensual).*/

    float capital, interes, montoFinal; // Variable del importe inicial junto con interes, montoFinal para calcular y mostrar
    int meses; // Variable del plazo en meses

    printf("CALCULO DE INTERES FIJO MENSUAL (2.5%)\n");

    printf("Ingrese el importe a invertir: "); // Solicito el capital
    scanf("%f", &capital); // Guardo el valor

    printf("Ingrese el plazo en meses: "); // Solicito los meses
    scanf("%d", &meses); // Guardo el plazo

    interes = capital * (INTERES_MENSUAL / 100) * meses;// Calculo el interes usando la constante

    montoFinal = capital + interes; // Calculo el capital junto con el los intereses

    printf("\n------------------------------");
    printf("\nCapital inicial: %.2f", capital); // Muestro el capital
    printf("\nInteres generado: %.2f", interes); // Muestro los Intereses
    printf("\nMonto final: %.2f", montoFinal); // Muestro el monto final
    printf("\n------------------------------");

    printf("\n--FIN--"); // Final del programa
    return 0;
}
