#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*35. Escribir un programa que permita al usuario introducir un valor expresado en horas,
    y calcule su equivalente en minutos y en segundos.*/
    float horas, minutos, segundos; // Variables para la hora y los minutos, segundos para calcular

    printf("CONVERSION DE HORAS A MINUTOS Y SEGUNDOS\n");

    printf("Ingrese la cantidad de horas: "); // Solicito las horas
    scanf("%f", &horas); // Guardo el valor ingresado

    minutos = horas * 60; // Convierto a minutos 1h= 6omin
    segundos = horas * 3600; // Convierto a segundos 1h= 3600seg

    printf("\n------------------------------");
    printf("\nHoras: %.2f hora", horas); // Muestro lo ingresado
    printf("\nEquivalente en minutos: %.2f minutos", minutos); // Muestro los minutos
    printf("\nEquivalente en segundos: %.2f segundos", segundos); // Muestro los segundos
    printf("\n------------------------------");

    printf("\n--FIN--");
    return 0;
}
