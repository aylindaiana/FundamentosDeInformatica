#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*6. Hacer un programa que dado un número entero N ingresado por teclado, permita
imprimir su tabla de multiplicar hasta el 10.*/
    printf("-----------------------------------");
    printf("\n-----BIENVENIDO AL PROGRAMA-----");
    printf("\n---------------------------------");
    int numero; // Inicializo el espacio para ingresar el numero
    printf("\nIngrese el numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero); // Guardamo el numero en su espacio
    for(int i=0; i<=10;i++){
        printf("\n%d * %d = %d",numero, i, numero*i); // Hacemos el calculo y mostramos en pantalla
    }
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
