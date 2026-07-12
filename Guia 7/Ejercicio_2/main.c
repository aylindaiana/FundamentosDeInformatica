#include <stdio.h>
#include <stdlib.h>

/*2. Suma con aritmética de punteros
Hacer un programa que permita sumar dos valores tipo float (introducidos por teclado).
Para realizar la suma, utilice aritmética de punteros.*/

int main()
{
    float valor1, valor2, suma=0;
    float *p1=NULL; // Puntero para el primer numero
    float *p2=NULL; // Puntero para el segundo numero
    printf("Ingrese un valor: ");
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &valor2);
    p1=&valor1; // Guardo la direccion de valor1
    p2=&valor2; // Guardo la direccion de valor2
    suma+=*p1+*p2; // Sumo los valores apuntados
    printf("La suma de ambos valores usando punteros es: %.2f", suma);
    return 0;
}
