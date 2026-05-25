#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*5. Crear un programa que permita visualizar en pantalla, la tabla del 5 hasta el 5x10. La
salida en pantalla deberá ser así:
TABLA DEL 5:
5 * 0 = 0
5 * 1 = 5
. . .
5 * 10 = 50
*/
    printf("-----------------------------------");
    printf("\n-----BIENVENIDO AL PROGRAMA-----");
    printf("\n---------------------------------");

    for(int i=0; i<=10;i++){
        printf("\n5 * %d = %d", i, 5*i); // Hacemos el calculo y mostramos en pantalla
    }
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
