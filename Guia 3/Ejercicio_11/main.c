#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*11. Hacer un programa que permita calcular la suma de los cuadrados de los números del
    13 al 25.*/
    printf("\n-------------------------------------------");
    printf("\n----CALCULEMOS LA SUMA DE LOS CUADRADOS----");
    printf("\n-------------------------------------------");
    int i, numero, suma, cuadrado; // Inicializo el espacio para ingresar el numero
    for(i=13; i<=25;i++){
        cuadrado=i*i; // Realizo el calculo al cuadrado
        printf("\nEste es el cuadrado: %d", cuadrado); // Informo al usuario el cuadrado
        suma+=cuadrado; // Voy acumulando la suma
    }
    printf("\nLA SUMA DE LOS CUADRADOS ES: %d", suma); // Informo al usuario los resultados
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
