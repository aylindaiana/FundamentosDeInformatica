#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    15. Hacer un programa parecido al anterior, pero que sea así:
**********
*********
********
*******
******
*****
****
***
**
*
                */
    int numero = 10; // Para finalizar con 10 *
    for(int i=0; i<10; i++){ // Ddo que al final solo tiene 10 *
        for(int j=0; j<numero;j++){ // Para que vaya Creciendo
            printf("*");
        }
        printf("\n");
        numero--; // Para ir decreciendo
    }
    return 0;
}
