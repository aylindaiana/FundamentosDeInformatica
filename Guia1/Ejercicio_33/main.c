#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*33. Escribir un programa que calcule la velocidad de un proyectil que recorre x km en t
    minutos. Expresar el resultado en metros/segundo.
    Velocidad = espacio/tiempo.*/
    float km, minutos, velocidad; // Variables de los km a ingresar junto con los minutos, Velocidad para calcular

    printf("CALCULO DE VELOCIDAD EN METROS POR SEGUNDO\n");

    printf("Ingrese la distancia recorrida en km: "); // Solicito distancia
    scanf("%f", &km); // Guardo el valor

    printf("Ingrese el tiempo en minutos: "); // Solicito tiempo
    scanf("%f", &minutos); // Guardo el valor

    velocidad = (km * 1000) / (minutos * 60); // Hago la conversion y calculo

    printf("\n------------------------------");
    printf("\nDistancia: %.2f km", km); // Muestro los km ingresados
    printf("\nTiempo: %.2f minutos", minutos); // Muestro los minutos ingresados
    printf("\nVelocidad: %.2f m/s", velocidad); // Muestro la velocidad
    printf("\n------------------------------");

    printf("\n--FIN--"); // Final del programa
    return 0;
}
