#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
 /*20. Hacer un programa que permita multiplicar dos matrices 2x2. Los números de las
matrices deberán ser llenados en forma automática con números entre 0 y 10. Se pide:
Obtener una tercera matriz que sea el resultado de la suma de las dos matrices
iniciales.
Obtener una tercera matriz que sea el producto de las matrices.
Hallar la matriz traspuesta. */
    srand(time(NULL));
    int m1[2][2], m2[2][2], suma[2][2], producto[2][2], transpuesta[2][2]; // Inicializo las matrices
    printf("Matriz 1:\n");
    for (int i=0; i<2; i++){ // Recorro la filas de la matriz
        for (int j=0; j<2; j++){ // Recorro las columnas de la matriz
            m1[i][j] = rand() % 11; // Asignos numeros aleatorios del 0 al 10
            printf("%d ", m1[i][j]);
        }
        printf("\n"); // Salto un espacio por cada fila terminada
    }
    printf("Matriz 2:\n");
    for (int i=0; i<2; i++){ // Recorro la filas de la matriz
        for (int j=0; j<2; j++){ // Recorro las columnas de la matriz
            m2[i][j] = rand() % 11; // Asignos numeros aleatorios del 0 al 10
            printf("%d ", m2[i][j]);
        }
        printf("\n"); // Salto un espacio por cada fila terminada
    }
    printf("\n Suma: \n");
    for (int i=0; i<2; i++){ // Recorro las filas de la matriz
        for (int j=0; j<2; j++){ // Recorro las columnas de la matriz
            suma[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", suma[i][j]); // Muestro la suma de las matrices
        }
        printf("\n");
    }
    printf("\nProducto: \n");
    for (int i=0; i<2; i++){ // Recorro las filas de la matriz
        for (int j=0; j<2; j++){ // Recorro las columnas de la matriz
            producto[i][j] = 0; // Inicializa el valor
            for (int k = 0; k < 2; k++) {
                producto[i][j] += m1[i][k] * m2[k][j]; // Suma de productos
            }
            printf("%d ", producto[i][j]); // Muestro el producto
        }
        printf("\n");
    }
    printf("\nTranspuesta de la suma: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpuesta[i][j] = suma[j][i]; // Intercambio de filas y columnas
            printf("%d ", transpuesta[i][j]); // Muestro la transpuesta
        }
        printf("\n");
    }
    return 0;
}
