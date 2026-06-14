#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*21. Hacer un programa igual al ejercicio anterior, pero esta vez usando matrices de 3x3*/
    srand(time(NULL));
    int m1[3][3], m2[3][3], suma[3][3], producto[3][3], transpuesta[3][3]; // Inicializo las matrices
    printf("Matriz 1:\n");
    for (int i=0; i<3; i++){ // Recorro la filas de la matriz
        for (int j=0; j<3; j++){ // Recorro las columnas de la matriz
            m1[i][j] = rand() % 11; // Asignos numeros aleatorios del 0 al 10
            printf("%d ", m1[i][j]);
        }
        printf("\n"); // Salto un espacio por cada fila terminada
    }
    printf("Matriz 2:\n");
    for (int i=0; i<3; i++){ // Recorro la filas de la matriz
        for (int j=0; j<3; j++){ // Recorro las columnas de la matriz
            m2[i][j] = rand() % 11; // Asignos numeros aleatorios del 0 al 10
            printf("%d ", m2[i][j]);
        }
        printf("\n"); // Salto un espacio por cada fila terminada
    }
    printf("\n Suma: \n");
    for (int i=0; i<3; i++){ // Recorro las filas de la matriz
        for (int j=0; j<3; j++){ // Recorro las columnas de la matriz
            suma[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", suma[i][j]); // Muestro la suma de las matrices
        }
        printf("\n");
    }
    printf("\nProducto: \n");
    for (int i=0; i<3; i++){ // Recorro las filas de la matriz
        for (int j=0; j<3; j++){ // Recorro las columnas de la matriz
            producto[i][j] = 0; // Inicializa el valor
            for (int k = 0; k < 3; k++) {
                producto[i][j] += m1[i][k] * m2[k][j]; // Suma de productos
            }
            printf("%d ", producto[i][j]); // Muestro el producto
        }
        printf("\n");
    }
    printf("\nTranspuesta de la suma: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[i][j] = suma[j][i]; // Intercambio de filas y columnas
            printf("%d ", transpuesta[i][j]); // Muestro la transpuesta
        }
        printf("\n");
    }
    return 0;
}
