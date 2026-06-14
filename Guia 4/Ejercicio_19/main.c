#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*19. Hacer un programa que permita rellenar en forma automática una matriz 3x4, con
números del 0 al 20. Deberá visualizarse en pantalla dicha matriz y contar la cantidad
de números pares e impares que la conforman. */
    srand(time(NULL));
    int m[3][4];
    int pares=0, impares=0;
    for (int i=0; i<3; i++){ // Recorro la filas de la matriz
        for (int j=0; j<4; j++){ // Recorro las columnas de la matriz
            m[i][j] = rand() % 21; // Asignos numeros aleatorios del 1 al 10
            printf("%d ", m[i][j]);
        }
        printf("\n"); // Salto un espacio por cada fila terminada
    }
    for (int i=0; i<3; i++){ // Recorro las filas de la matriz
        for (int j=0; j<4; j++){ // Recorro las columnas de la matriz
            if(m[i][j] % 2==0){ // Verifico que el numero sea par
                pares++; // Incremento al contador de pares en caso de ser correcto
            }else {
                impares++; // Caso contrario incremento en el contador de impares
            }
        }
    }
    printf("Hay un total de %d numeros pares \n Y un total de %d numeros impares", pares, impares);
    return 0;
}
