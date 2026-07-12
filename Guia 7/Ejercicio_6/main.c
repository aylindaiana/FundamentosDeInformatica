#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*6. Mayor elemento con aritmética de punteros
Haga un programa que, utilizando aritmética de punteros, pueda determinar cuál es
el mayor de los números enteros de un vector de 10 posiciones. Indique el mayor valor
dentro del vector (que deberá cargarse con números aleatorios del 0 al 100) y además
indique en qué posición del vector y en qué posición de memoria se encuentra. Grafique
la memoria para explicar el resultado.*/

int main()
{
    srand(time(NULL));
    int vector[10], mayor, posicion;
    int *p=NULL;
    for (int i=0; i<10;i++){ // Cargo el vector con numeros aleatorios
        p=vector+i; // Determino que el puntero apunte al elemento i
        *p=rand()%101; // Guarda un numero entre 0 y 100
    }
    printf("vector:\n");
    for(int i=0; i<10;i++){
        p=vector+i; // Determino que el puntero apunte al elemnto i
        printf("[%d]", *p); // Muestro el vector
    }
    mayor=*vector; // Tomo el primer elemento como el mayor
    posicion=0; // Tomando la posicion inicial
    for(int i=0; i<10;i++){
        p=vector+i; // Determino que el puntero apunte al elemnto i
        if(*p>mayor){ // Busco el mayor elemento
            mayor=*p;
            posicion=i;
        }
    }
    printf("\nMayor valor: %d", mayor);
    printf("\nPosicion del vector: %d", posicion);
    printf("\nDireccion de memoria: %p", vector+posicion); // Direccion de memoria del mayor
    return 0;
}
