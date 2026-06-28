#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*1. Hacer un programa que permita, mediante el uso de funciones con paso de parámetros
por valores, realizar el cálculo del cuadrado de cualquier número introducido por el
usuario. Ej.: si se introduce el número 2, el programa deberá pasar ese valor a la
función que calcula el cuadrado del número, devolviendo el valor correcto: 4.*/

int cuadrado(int a);
void main(){
    printf("--Elevacion al cuadrado!-- \n\n ");
    int num1, resultado;

    printf("Ingrese el numero a elevar: ");
    scanf("%d", &num1);
    resultado=cuadrado(num1);
    printf("\n\tSu resultado es: %d ", resultado);
}
int cuadrado(int a){
    return pow(a, 2);
}
