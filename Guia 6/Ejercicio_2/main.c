#include <stdio.h>
#include <stdlib.h>
/*2. Hacer un programa que permita calcular, mediante el uso de funciones, sin paso de
parámetros, el área de un rectángulo cuyos lados serán ingresados por teclado.*/

float calculo_area(); // Dado que es sin paso de parametros uso "void"

int main()
{
    float area;
    printf("-----Calculemos el area de un rectangulo-----\n");

    area = calculo_area(); // Guardo el resultado del calculo de area en una variable del tipo "float"
    printf("El resultado del area es: %.2f", area);

    return 0;
}

float calculo_area(){ // Funcion sin parametros
    float lado1, lado2;
    printf("Ingrese el primer lado del rectangulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el segundo lado del rectangulo: ");
    scanf("%f", &lado2);
    return lado1*lado2;
};
