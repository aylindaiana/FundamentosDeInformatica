#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*23. Ausencias de clase. Se tiene una matriz con la siguiente información:
Matemática Física Química Biología
Juan 0 2 5 5
José 1 1 0 6
María 4 3 0 0
Pedro 5 3 0 2
Se pide hacer un programa que tenga los valores indicados. Luego, el programa deberá
indicar qué alumnos quedaron libres por tener más de un 25 % de ausencias.
Considere que el total de clases es 16. Un alumno queda libre cuando la cantidad de ausencias es
igual o mayor al 25 %. Indicar qué alumno quedó libre y en qué materia.
Nota: los nombres de los alumnos, al igual que las materias, no hace falta imprimirlos
en pantalla.*/
    int ausencias[4][4]= {{0,2,5,5}, {1,1,0,6}, {4,3,0,0}, {5,3,0,2} };
    char alumnos[4][10] = {"Juan", "Jose", "Maria", "Pedro"};
    char materias[4][15] = {"Matematica", "Fisica", "Quimica", "Biologia"};

    int totalClases = 16; // Total de clases
    int limite = totalClases * 25 / 100; // 25% de las clases

    for (int i = 0; i < 4; i++) { // Recorro  las alumnos (filas)
        for (int j = 0; j < 4; j++) { // Recorro las materias (columnas)
            if (ausencias[i][j] >= limite) { // Si las ausencias ≥ 25
                printf("\n %s quedo libre en %s (ausencias: %d)\n",
                alumnos[i], materias[j], ausencias[i][j]);
            }
        }
    }
    return 0;
}
