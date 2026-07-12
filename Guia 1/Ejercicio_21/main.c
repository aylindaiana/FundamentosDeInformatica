#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*21. Haga un programa que permita calcular la raíz cuadrada de un valor ingresado por
    teclado. (Función sqrt).*/
    float num, raiz; // Variable numero y de raiz cuadrada para calcular

    printf("Ingrese un valor: "); // Solicito el numero al usuario
    scanf("%f", &num); // Guardo el valor ingresado

    raiz = sqrt(num); // Calculo la raiz cuadrada

    printf("\n------------------------------");
    printf("\nLa raiz cuadrada de %.2f es: %.2f", num, raiz); // Muestro el numero ingresado junto a su raiz
    printf("\n------------------------------");

    printf("\n--FIN--"); // Fin del programa
    return 0;
}
