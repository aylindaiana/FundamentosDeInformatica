#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Vector con direcciones de memoria
Dado un vector de 15 elementos enteros y aleatorios entre 0 y 100, se pide escribir un
programa en C (haciendo uso de punteros) que muestre las direcciones de memoria de
cada elemento del vector y su correspondiente valor.
Ejemplo de salida:
Posición 0: Dirección de memoria: AABBCCDD – Valor: 20
Posición 1: Dirección de memoria: AABBCCDD – Valor: 44
Posición 2: Dirección de memoria: AABBCCDD – Valor: 12
Posición 3: Dirección de memoria: AABBCCDD – Valor: 32*/
int main()
{
    srand(time(NULL));
    int vector[15];
    int * p1 = NULL;
    for(int i=0; i<15; i++){
        vector[i] = rand() % 101; // Numeros del 0 al 100 para el vector
        //printf("%d - ", vector[i]); // Uso como guia para verificar los numeros aleatorios
    }
    for(int i=0; i<15; i++){ // Recorro nuevamente el vector
        p1 = &vector[i]; // Guardo en el puntero la dirección del elemento con &
        printf("\nPosicion %d: Direccion de memoria: %p - Valor: %d", i, p1,*p1);

    }
    return 0;
}
