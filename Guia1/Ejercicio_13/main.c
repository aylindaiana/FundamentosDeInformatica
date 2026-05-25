#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*13. Haga un programa que permita calcular el área y el perímetro de cuadrado. El programa
deberá preguntar los valores de los lados y almacenar dichos valores, considerando que
pueden ser enteros o con decimales.
*/
    float lado, area, perimetro; // Variables, el lado del cuadrado y para guardar resultados

    printf("Ingrese el valor del lado del cuadrado: "); // Solicito el dato al usuario
    scanf("%f", &lado); // Guardo el valor ingresado

    area = lado * lado; // Calculo el área (lado^2)
    perimetro = 4 * lado; // Calculo el perímetro (4 * lado)
    printf("\n------------------------------");
    printf("El area del cuadrado es: %.2f\n", area); // Muestro el área con 2 decimales
    printf("El perimetro del cuadrado es: %.2f\n", perimetro); // Muestro el perímetro

    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del ejercicio

    return 0;
    return 0;
}
