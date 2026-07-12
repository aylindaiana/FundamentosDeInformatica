#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*2. Modificar el programa anterior, pero esta vez para que se muestre como resultado, la
    multiplicación y la división de los enteros introducidos.*/
    int num1, num2, multiplicacion,division; // Especifico el formato e ingreso mis variables
    printf("----------->");
    printf("Ingrese un numero entero: "); // Solicito al usuario un numero entero
    scanf("%d", &num1); // Guardo en variable el valor ingresado
    printf("----------->");
    printf("Ingrese otro numero entero: "); // Solicito al usuario un numero entero
    scanf("%d", &num2); // Guardo en variable el valor ingresado
    multiplicacion=num1*num2; //Realizo el calculo de la multiplicacion
    division=num1/num2; //Realizo el calculo division

    printf("\n Su multiplicacion es: %d", multiplicacion); // Muestra el resultado por pantalla
    printf("\n---------------------------");
    printf("\n Su division es: %d", division); // Muestra el resultado por pantalla
    printf("\n --FIN--"); // Fin del programa
    return 0;
}
