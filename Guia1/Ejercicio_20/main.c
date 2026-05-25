#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*20. Escriba el mismo programa anterior, pero utilizando la función pow. Para este ejercicio,
    en pantalla se deberá mostrar lo siguiente:
    CALCULA EL CUADRADO Y EL CUBO DE UN NRO USANDO LA FUNCION POW
    Ingrese Valor: X
    El Nro: X elevado al cuadrado es: Y
    El Nro: X elevado al cubo es: Z */
    float num, cuadrado, cubo; // Variables numero para el usuario y cuadrado, cubo para calcular

    printf("CALCULA EL CUADRADO Y EL CUBO DE UN NRO USANDO LA FUNCION POW\n");

    printf("Ingrese Valor: "); // Solicito el valor
    scanf("%f", &num); // Guardo el numero ingresado

    cuadrado = pow(num, 2); // Calculo el cuadrado usando pow
    cubo = pow(num, 3); // Calculo el cubo usando pow
    printf("\n------------------------------")
    printf("\nEl Nro: %.2f elevado al CUADRADO es: %.2f y al CUBO es: %.2f", num, cuadrado, cubo); // Muestro el numero junto con el calculo realizado
    printf("\n------------------------------");

    printf("\n--FIN--"); // Final del programa
    return 0;
}
