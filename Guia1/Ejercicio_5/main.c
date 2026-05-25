#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Modifique el programa del ejercicio 4, pero esta vez, el incremento debe ser de 5 y el
    decremento de 3.
    Ejemplo:
    Valor: 10 Incremento: 15 Decremento: 7  */

    int valor, incremento,decremento; // Especifico el formato e ingreso mis variables
    printf("----------->");
    printf("Ingrese un numero entero: "); // Solicito al usuario un numero entero
    scanf("%d", &valor); // Guardo en variable el valor ingresado

    incremento=valor+5; //Realizo el valor del incremento sumandole al valor un 5 y asignandole con el igual
    decremento=valor-3; //Realizo el valor del incremento restadole al valor un 3 y asignandole con el igual

    printf("\n Su incrmento es: %d", incremento);  // Muestra el resultado por pantalla
    printf("\n---------------------------");
    printf("\n Su decremento es: %d", decremento); // Muestra el resultado por pantalla
    printf("\n --FIN--"); // Fin del programa
    return 0;
}
