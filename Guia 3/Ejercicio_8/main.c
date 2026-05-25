#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*8. Hacer un programa que permita imprimir en pantalla 50 números aleatorios, utilizar
función srand().*/
    printf("-----------------------------------");
    printf("\n-----BIENVENIDO AL PROGRAMA-----");
    printf("\n---------------------------------");
    int numero; // Inicializo el espacio para guardar el numero random
    srand(time(NULL));

    for(int i=0; i<50; i++){
        numero=  rand()%101;
        printf("\n Su numero es: %d", numero); // Informo al usuario los resultados
    }
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
