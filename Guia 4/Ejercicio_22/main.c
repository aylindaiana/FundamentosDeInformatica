#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*22. Hacer un programa similar a los ejercicios 13 y 14, pero esta vez la dimensión de la
matriz será un dato que deberá ingresar el usuario por teclado. */
    int filas, columnas;

    printf("Ingrese la cantidad de filas: "); // Solicito al usuario el tamaño de Fila
    scanf("%d", &filas);
    printf("Ingrese la cantidad de columnas: "); // Solicito al usuario el tamaño de Columna
    scanf("%d", &columnas);

    int matriz[filas][columnas]; // Declaración de la matriz con tamaño dinámico
    srand(time(NULL)); // Inicializa la semilla para números aleatorios

    for (int i = 0; i < filas; i++) { // Recorre filas
        for (int j = 0; j < columnas; j++) { // Recorre columnas
            matriz[i][j] = rand() % 11; // Numero aleatorio entre 0 y 10
        }
    }

    printf("\nMatriz generada:\n"); // Muestro la matriz en pantalla
    for (int i = 0; i < filas; i++) { // Recorro nuevamente para mostrar la matriz ya completa con numeros aleatorios
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]); // Muestro cada elemento
        }
        printf("\n");
    }
    return 0;
}
