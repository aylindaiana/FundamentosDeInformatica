#include <stdio.h>
#include <stdlib.h>


    float suma(float a, float b);

    void main(){
    printf("Suma de 2 numeros con funcion \n\n");
    float num1, num2, resultado;
    printf("Ingrese el 1er valor: ");
    scanf("%f", &num1);
    printf("\nIngrese el 2do valor: ");
    scanf("%f", &num2);
    resultado=suma(num1, num2);
    printf("\n\tEl resultado es: %.2f", resultado);
    }

    float suma(float a, float b){
        return a + b;
    }

