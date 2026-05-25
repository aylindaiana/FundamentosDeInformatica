#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*12. Hacer un programa que permita calcular la suma siguiente: 100 + 90 + 80 + 70 +
    . . . + 0. */
    printf("\n-----------------------------------------------------");
    printf("\n----CALCULEMOS LA SUMA DECRECIENTE EN 10UNIDADES----");
    printf("\n----------------------------------------------------\n");
    int i, suma; // Inicializo el espacio para ingresar el numero
    for(i=100; i>0;i-=10){ // declaro que empiece en 100 y decrezca de 10 en 10
        suma+=i; // Realizo la suma correspondiente
        printf("%d + ", i); // Informo al usuario los resultados
    }
    printf("%d", i);
    printf("\nLA SUMA FINAL ES: %d", suma); // Informo al usuario los resultados
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
