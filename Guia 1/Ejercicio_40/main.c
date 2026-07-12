#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*40. Haga un programa que permita calcular el costo de una llamada telefónica.
    Para eso se pide que ingrese por teclado la duración de la llamada (expresada en minutos enteros).
    Considere que el costo de la llamada es de 0.054$ por segundo.*/

    int minutos, segundos; // Variable para los minutos de la llamada y los segundos
    float costo; // Variable para el costo total

    printf("CALCULO DE LLAMADA TELEFONICA\n");
    printf("\n------------------------------");
    printf("\nIngrese duracion de la llamada en minutos: "); // Solicito los minutos
    scanf("%d", &minutos); // Guardo el valor

    segundos = minutos * 60; // Convierto minutos a segundos
    costo = segundos * 0.054; // Calculo el costo total

    printf("\n------------------------------");
    printf("\nDuracion en segundos: %d", segundos); // Muestro segundos
    printf("\nCosto de la llamada: $%.3f", costo); // Muestro costo
    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del programa
    return 0;
}
