#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*41. Escribir un programa que solicite por teclado 3 números (datos enteros) y que los
    mismos sean almacenados en 3 variables diferentes, llamadas a, b y c, respectivamente.
    Se pide que el programa haga lo siguiente:
    Que el contenido de a pase a ser el doble de c.
    Que el contenido de b pase a ser la suma de a + c.
    Que el contenido de c pase a ser el triple de b.
    Muestre en pantalla todos los resultados.
    Nota: Sólo se pueden declarar 4 variables en todo el programa*/

    int a, b, c; // Variables principales

    printf("\n------------------------------");
    printf("\nIngrese valor de a: "); // Solicito valor de a
    scanf("%d", &a);

    printf("\nIngrese valor de b: "); // Solicito valor de b
    scanf("%d", &b);

    printf("\nIngrese valor de c: "); // Solicito valor de c
    scanf("%d", &c);

    a = 2 * c; // a pasa a ser el doble de c
    b = a + c; // b pasa a ser a + c
    c = 3 * b; // c pasa a ser el triple de b

    printf("\n------------------------------");
    printf("\nNuevo valor de a: %d", a); // Muestro nuevo a
    printf("\nNuevo valor de b: %d", b); // Muestro nuevo b que calculo con el valor NUEVO de a
    printf("\nNuevo valor de c: %d", c); // Muestro nuevo c que calculo con el NUEVO valor de b
    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del programa
    return 0;
}
