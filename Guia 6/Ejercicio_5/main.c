#include <stdio.h>
#include <stdlib.h>
/*5. Hacer un programa que implemente funciones para realizar el cálculo del promedio de
3 valores del tipo float que son introducidos por teclado.*/
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

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);
    printf("Ingrese el tercer numero: ");
    scanf("%f", &numero3);
    sumatoria = suma(numero1, numero2, numero3);
    return sumatoria/3;
}
float suma(float a, float b, float c){
    return a+b+c;
};
