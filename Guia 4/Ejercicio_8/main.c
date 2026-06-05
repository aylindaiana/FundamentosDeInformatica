#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*8. Escribir un programa que lea un vector de 10 elementos. Deberá imprimir el mismo
vector por pantalla pero invertido. Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10, el
programa debería imprimir 10 9 8 7 6 5 4 3 2 1.
*/
    int vector_a[10];
    srand(time(NULL));
    for(int i=0; i<10; i++){
        vector_a[i] = rand()%11;
    }
    printf("\nSu vector es el siguiente: ");
    for(int i=0; i<10; i++){
        printf("[%d]", vector_a[i]);
    }
    printf("\nSu vector Invertido es el siguiente: ");
    for(int i=9; i>=0; i--){
        printf("[%d]", vector_a[i]);
    }
    return 0;
}
