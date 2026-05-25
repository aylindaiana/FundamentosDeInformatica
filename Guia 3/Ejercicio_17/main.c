#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*17. Utilizando la estructura de repetición while, imprimir en pantalla las tablas de multiplicar, hasta el número 10, del 1 a N, donde N es el valor que el usuario ingresa por
    pantalla. Ej: si el usuario ingresa N = 3, el programa deberá imprimir en pantalla la
    tabla del 1, la del 2 y la del 3, hasta el 10 inclusivo (1x10; 2x10 y 3x10).*/
    printf("\n-----------------------------------------------------");
    printf("\n-----------MULTIPLIQUEMOS HAS EL 10------------------");
    printf("\n----------------------------------------------------");
    int numero, aux=1;
    //Utilizaremos 2 ciclos while
    printf("\nIngrese un numero: ", numero); // Pedimos que se ingrese un numero
    scanf("%d", &numero); // Guardamo el numero en su espacio
    while(aux<=numero){ // uso "<=" y no el "!=" porque sino no incluiria el ultimo numero ingresado, ej si ingreso 3 solo incluiria 1 y 2.

        printf("\nEste es el aux actual: %d", aux);
        int multi=1; // Lo inicializodesde adentro para que se reinicie en cada vuelta de aux
        while(multi<=10){
            printf("\n%d x %d = %d", aux, multi, aux*multi);
            multi++; // Realizo la sumatorias para que complete las 10
        }
        aux++; // Para ir llegando a la cantidad total DE TABLAS a completar
    }
    printf("\n---------------------------------");
    printf("\n---FIN---");
    return 0;
}
