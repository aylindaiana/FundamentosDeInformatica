#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*15. Hacer un programa que, dado un número que se ingresa por teclado, mayor a cero,
indique si es un número primo.*/
    printf("---------------------------------------------");
    printf("\n------Identificamos si es primo------");
    printf("\n-------------------------------------------");
    int valor; // Inicializo el espacio para ingresar un numero

    printf("\nIngrese un numero mayor a cero: "); // Pedimos que se ingrese un numero
    scanf("%d", &valor); // Guardamo el numero en su espacio

    if(valor <= 0){ // Para uso de nros positivos mayores a cero
        printf("\nERROR: No acepto numeros negativos");
        printf("\n---Intentalo nuevamente---");
        return 0; // Finalizamos el programa
    }
    if(valor == 1){
        printf("\nEl numero 1 no es primo");
    } else if(valor == 2 || valor == 3 || valor == 5 || valor == 7 || valor == 11){
        printf("\nEl numero ingresado es primo"); //Informo al usuario que el numero es PRIMO
    } else if(valor%2 == 0){
        printf("\nEl numero ingresado no es primo");
    } else if(valor%3 == 0){
        printf("\nEl numero ingresado no es primo");
    } else if(valor%5 == 0){
        printf("\nEl numero ingresado no es primo");
    } else if(valor%7 == 0){
        printf("\nEl numero ingresado no es primo");
    } else if(valor%11 == 0){
        printf("\nEl numero ingresado no es primo");
    } else {
        printf("\nEl numero ingresado es primo");
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
