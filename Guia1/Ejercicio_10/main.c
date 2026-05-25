#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*10) Escriba un programa que permita al usuario introducir 3 números enteros por teclado,
y que los visualice en pantalla, en el orden inverso al que fueron introducidos.
Ejemplo:
Introduzca N° 1: 23
Introduzca N° 2: 44
Introduzca N° 3: 120
Los números ingresados en orden inverso son: 120 44 23
Nótese que los números están separados por una tabulación.
*/
    int num1, num2, num3; // Declaración de las tres variables enteras
    printf("Introduzca N° 1: "); //Solicito al usuario ingresar el primer entero
    scanf("%d", &num1); //Guardo lo ingresado
    printf("Introduzca N° 2: "); //Solicito al usuario ingresar el segundo entero
    scanf("%d", &num2); //Guardo lo ingresado
    printf("Introduzca N° 3: "); //Solicito al usuario ingresar el tercero entero
    scanf("%d", &num3); //Guardo lo ingresado
    printf("Los números ingresados en orden inverso son: %d\t %d\t %d\t", num3, num2, num1);
    printf("--FIN--"); // Final del ejercicio

    return 0;
}
