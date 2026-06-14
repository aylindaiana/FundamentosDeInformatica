#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* 17. Tomando como base el ejercicio anterior, ahora se pide que se sumen los valores ubicados en los extremos de la matriz: 0 + 2 + 6 + 8 y que se muestre en pantalla el resultado*/
    srand(time(NULL));
    int m[3][3];
    int suma;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            m[i][j] = rand() % 11; // Asignos numeros aleatorios del 1 al 10
            printf("%d ", m[i][j]);
        }
        printf("\n"); // COmpilo un espacio por cada fila terminada
    }
    // Sumo los 4 elementos ubicados en cada esquina de la matriz
    suma = m[0][0] + m[0][2] + m[2][0] + m[2][2];
    printf("\nLa suma de los extremos es: %d", suma);
    return 0;
}
