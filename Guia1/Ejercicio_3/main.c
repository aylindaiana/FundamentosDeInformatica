#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 3-Haga un programa que permita dividir dos valores enteros y muestre en pantalla, el
    resultado de la división y el resto de dicha operación. (Ej.: 4/2 = 2 y el resto es 0).*/
    int num1, num2, division, resto; // Especifico el formato e ingreso mis variables
    printf("----------->");
    printf("Ingrese un numero entero: ");// Solicito al usuario un numero entero
    scanf("%d", &num1); // Guardo en variable el valor ingresado
    printf("----------->");
    printf("Ingrese otro numero entero: "); // Solicito al usuario un numero entero
    scanf("%d", &num2); // Guardo en variable el valor ingresado
    division=num1/num2; //Realizo el calculo
    resto=num1%num2; //Realizo el calculo

    printf("\n Su division es: %d", division); // Muestra el resultado por pantalla
    printf("\n---------------------------");
    printf("\n Su resto es: %d", resto);// Muestra el resultado por pantalla
    printf("\n --FIN--"); // Fin del programa
    return 0;
}
