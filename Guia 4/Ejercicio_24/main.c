#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
        /*24. Hacer un programa similar al ejercicio anterior, pero esta vez que la matriz se rellene
automáticamente con valores entre 0 y 16.*/
    srand(time(NULL));
    int ausencias[4][4];
    char alumnos[4][10] = {"Juan", "Jose", "Maria", "Pedro"};
    char materias[4][15] = {"Matematica", "Fisica", "Quimica", "Biologia"};

    for(int i=0; i<4;i++){ // Genero las filas de las ausencias
        for(int j=0; j<4;j++){ // Genero las columnas de las ausencias
            ausencias[i][j] = rand() % 17; // Genera valores del 0 al 16
        }
    }
    printf("\nMatrix de las ausencias: \n");
    for(int i=0; i<4;i++){ // Muestro las filas de las ausencias
        for(int j=0; j<4;j++){ // Muestro las columnas de las ausencias
            printf("%d ", ausencias[i][j]);
        }
        printf("\n"); // Separo por fila
    }
    int totalClases = 16; // Total de clases
    int limite = totalClases * 25 / 100; // 25% de las clases
    printf("\n Informe de Ausencias: \n");
    for (int i = 0; i < 4; i++) { // Recorro  las alumnos (filas)
        for (int j = 0; j < 4; j++) { // Recorro las materias (columnas)
            if (ausencias[i][j] >= limite) { // Si las ausencias ≥ 4 el alumno queda libre
                printf("\n %s quedo libre en %s (ausencias: %d)\n",
                alumnos[i], materias[j], ausencias[i][j]);
            }
        }
    }
    return 0;
}
