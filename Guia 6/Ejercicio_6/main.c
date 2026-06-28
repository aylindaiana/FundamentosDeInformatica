#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*6. Repetir el programa anterior, pero esta vez considerando que los 3 valores serán números aleatorios entre 0 y 100.
Implementar una función “aleatorio” para el cálculo del número, y una función promedio para encontrar el promedio del número*/
float calculo_promedio();
float suma(float a, float b, float c);
int main()
{

    float promedio;
    printf("----Calculemos el promedio----\n");
    promedio = calculo_promedio();
    printf("Su promedio es: %.2f", promedio);
    return 0;
}

float calculo_promedio(){
    float numero1, numero2, numero3, sumatoria;
    srand(time(NULL));

    numero1 = rand() % 101;
    numero2 = rand() % 101;
    numero3 = rand() % 101;
    sumatoria = suma(numero1, numero2, numero3);
    return sumatoria/3;
}
float suma(float a, float b, float c){
    return a+b+c;
};
