#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Haga un programa que permita introducir un valor entero por teclado. Almacene dicho
    número en una variable llamada valor. Luego, incremente valor en 1 y almacene
    el resultado en otra variable llamada INCREMENTO. Luego, tomando valor ingresado,
    almacene en DECREMENTO el número −1. Muestre en pantalla lo que se almacenó en
    valor, en INCREMENTO y en DECREMENTO.
    Ejemplo:
    Introduzca valor: 45
    Incremento: 46
    Decremento: 44  */
    int valor, incremento,decremento; // Especifico el formato e ingreso mis variables
    printf("----------->");
    printf("Ingrese un numero entero: "); // Solicito al usuario un numero entero
    scanf("%d", &valor); // Guardo en variable el valor ingresado

    incremento=valor+1; //Realizo el valor del incremento
    decremento=valor-1; //Realizo el valor del decremento

    printf("\n Su incremento es: %d", incremento); // Muestra el resultado por pantalla
    printf("\n---------------------------");
    printf("\n Su decremento es: %d", decremento); // Muestra el resultado por pantalla
    printf("\n --FIN--");// Fin del programa
    return 0;
}
