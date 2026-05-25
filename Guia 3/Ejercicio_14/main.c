#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*14. Crear un programa utilizando bucles que nos dibuje esto:
*
**
***
****
*****
******
*******
********
*********
**********    */
    int numero =1; // Para finalizar con 1 solo *
    for(int i=0; i<10; i++){ // Ddo que al final solo tiene 10 *
        for(int j=0; j<numero;j++){ // Para que vaya Creciendo
            printf("*");
        }
        printf("\n");
        numero++;
    }
    return 0;
}
