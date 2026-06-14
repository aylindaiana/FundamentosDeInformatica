#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* 18. Tomando como base el ejercicio 16, ahora el programa deberá sumar las diagonales:
0 + 4 + 8 = 12 y 6 + 4 + 2 = 12.
*/
    srand(time(NULL));
    int m[3][3];
    int suma_diagonal1, suma_diagonal2;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            m[i][j] = rand() % 11; // Asignos numeros aleatorios del 1 al 10
            printf("%d ", m[i][j]);
        }
        printf("\n"); // COmpilo un espacio por cada fila terminada
    }
    // Sumo los 4 elementos ubicados en las diagonales de la matriz
    suma_diagonal1 = m[0][0] + m[1][1] + m[2][2] ;
    suma_diagonal2 = m[2][0] + m[1][1]+ m[0][2] ;
    printf("\nLa suma de los diagonales es: %d", suma_diagonal1);
    printf("\nLa suma de los diagonales es: %d", suma_diagonal2);
    return 0;
}
