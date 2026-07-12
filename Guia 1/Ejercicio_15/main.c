#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*15. Escribir un programa que permita ingresar una X cantidad de días, y que como resultado muestre en pantalla la cantidad de minutos y segundos que hay en esa X cantidad
    de días.*/
    int dias, minutos, segundos; // Variables de dia y para guardar resultados

    printf("Ingrese la cantidad de dias: "); // Solicito el dato al usuario
    scanf("%d", &dias); // Guardo el valor ingresado

    minutos = dias * 24 * 60; // Convierto días a minutos 1día = 24 hs y 1hs = 60 min
    segundos = dias * 24 * 60 * 60; // Convierto días a segundos
    printf("\n------------------------------");
    printf("\nEn %d dias hay %d minutos y hay %d segundos", dias, minutos, segundos); // Muestro minutos. Determino el lugar donde aparecen los min es el lugar de "%d"
    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del ejercicio
    return 0;
}
