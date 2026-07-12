#include <stdio.h>
#include <stdlib.h>

int main()
{
/*11. Modifique el programa anterior para que los números ingresados sean decimales, pero
esta vez debe mostrarlos uno debajo del otro.
Ejemplo:
0.3452
0.1123
1.5432*/
    float num1, num2, num3; // Declaración de las tres variables enteras
    printf("Introduzca N° 1: "); //Solicito al usuario ingresar el primer entero
    scanf("%f", &num1); //Guardo lo ingresado
    printf("Introduzca N° 2: "); //Solicito al usuario ingresar el segundo entero
    scanf("%f", &num2); //Guardo lo ingresado
    printf("Introduzca N° 3: "); //Solicito al usuario ingresar el tercero entero
    scanf("%f", &num3); //Guardo lo ingresado
    printf("Los números ingresados en orden inverso son: "); //muestro mensaje previo a mostrar cada resultado uno debajo del otro.
    printf("\n%.4f", num3);
    printf("\n%.4f", num2);
    printf("\n%.4f", num1);
    printf("\n--FIN--"); // Final del ejercicio

    return 0;
}
