#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*7. Generar 3 vectores de 20 posiciones cada uno. El vector A deberá contener números
aleatorios entre 0 y 99. El vector B también deberá ser rellenado con valores aleatorios
entre 0 y 99, y el vector C deberá contener la suma de A + B en cada posición. Al
finalizar, el vector C además deberá indicar el promedio de todos los números que tiene
almacenados. La salida del programa será así:
A B C
10 10 20
11 11 22
20 20 40
Promedio de C = (20 + 22 + 40)/3 = 27,3333*/
    int vector1[20], vector2[20], vector3[20], suma=0;
    float promedio;
    srand(time(NULL));
    for(int i=0; i<20; i++){
        vector1[i]=rand()%100;
        vector2[i]=rand()%100;
        vector3[i]=vector1[i]+vector1[i];
        suma+=vector3[i];
    }
    promedio=suma/20.0;
    printf("\t| A\t| B\t| C\n");
    printf("\t|-------|-------|------\n");

    for(int i = 0; i < 20; i++)
    {
        printf("\t| %d\t| %d\t| %d\n", vector1[i], vector2[i], vector3[i]);
        printf("\t|-------|-------|------\n");
    }
    printf("\nEl promedio de C es %.2f", promedio);
    return 0;
}
