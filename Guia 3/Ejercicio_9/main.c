#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*9. Modificar el programa anterior, pero para imprimir 50 números aleatorios entre 0 y
    100, y mostrar el promedio de dichos números.
    */
    int i, numero, suma=0; // Inicializo el espacio para ingresar el numero
    float promedio=0;
    srand(time(NULL));
    printf("\n------------------------------------------------------");
    printf("\n----CALCULEMOS EL PROMEDIO DE 50 NUMEROS ALEATORIOS---");
    printf("\n------------------------------------------------------");
    for(i=0; i<50; i++){
        numero=  rand()%101; // Calculo numeros randoms del 1 al 100
        suma+=numero; // Voy acumulando la suma
    }
    promedio= suma/i; // Realizo el calculo
    printf("\nSu promedio es: %.2f", promedio); // Informo al usuario los resultados
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
