#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*19. Escriba un programa que permita ingresar un número por teclado y muestre en pantalla
    ese número elevado al cuadrado y el mismo número elevado al cubo.*/
    float num, cuadrado, cubo; // Variables numero para el usuario y cuadrado, cubo para calcular

    printf("Ingrese un numero: "); // Solicito el numero al usuario
    scanf("%f", &num); // Guardo el valor ingresado

    cuadrado = num * num; // Elevo el numero al cuadrado
    cubo = num * num * num; // Elevo el numero al cubo

    printf("\n------------------------------");
    printf("\nEl numero ingresado es: %.2f", num); // Empiezo mostrando el numero
    printf("\nAl cuadrado es: %.2f", cuadrado); // Muestro el cuadrado
    printf("\nAl cubo es: %.2f", cubo); // Muestro el cubo
    printf("\n------------------------------");

    printf("\n--FIN--"); // Final del programa
    return 0;
}
