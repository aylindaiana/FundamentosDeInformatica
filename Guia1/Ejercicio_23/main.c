#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*23. Escriba un programa que permita, a partir de una X cantidad de grados centígrados,
    convertirlo a Fahrenheit.*/
    float celsius, fahrenheit; // Variable para ingresar celcius y calcular el fahrenheit

    printf("Ingrese la temperatura en grados centigrados: "); // Solicito el dato al usuario
    scanf("%f", &celsius); // Guardo el valor ingresado

    fahrenheit = (celsius * 9 / 5) + 32; // Conversion a Fahrenheit

    printf("\n------------------------------");
    printf("\nTemperatura en Celsius: %.2f", celsius); // Muestro resultado del celsius
    printf("\nEquivalente en Fahrenheit: %.2f", fahrenheit); // Muestro resultado del fahrenheit
    printf("\n------------------------------");

    printf("\n--FIN--"); // Fin del programa
    return 0;
}
