#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*16. Realizar un programa que rellene en forma automática una matriz 3x3. La misma
deberá contener números aleatorios entre 0 y 10. El resultado deberá mostrarse en
pantalla, con una salida similar:
0 1 2
3 4 5
6 7 8*/
    int m[3][3];
    srand(time(NULL));
    for (int i=0; i<3; i++){ // Recorre cada fila
        for ( int j=0; j<3;j++){ // Recorre cada columna
            m[i][j] = rand() % 11; // Asigna un número aleatorio entre 0 y 10
            printf("%d ", m[i][j]); // Muestra el número en la misma línea separado por espacio
        }
        printf("\n");
    }
    return 0;
}
