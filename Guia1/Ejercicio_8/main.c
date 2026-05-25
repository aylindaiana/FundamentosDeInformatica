#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*8. Hacer un programa que permita ingresar dos valores enteros por teclado. El primero
    se debe almacenar en una variable llamada A. El segundo (distinto del primero) en
    otra variable llamada B. Se pide que intercambie los valores de A y B y los muestre en
    pantalla (se deben mostrar las variables originales y luego de intercambiarlas).
    */
    int a, b, temp; // Variables para almacenar los dos valores y una temporal para el intercambio

    printf("Ingrese el valor de A: "); ;//Pido al usuario ingresar el primer entero
    scanf("%d", &a);// Guardo lo ingresado
    printf("Ingrese el valor de B (distinto de A): "); ;//Pido al usuario ingresar el segundo entero
    scanf("%d", &b);// Guardo lo ingresado

    printf("\n---------------------------\n");
    printf("Valores originales: ");
    printf("A = %d, B = %d", a, b);// Muestro los valores originales
    printf("\n---------------------------\n");

    temp = a;  // Se guarda el valor de A en una variable temporal
    a = b;     // A toma el valor de B
    b = temp;  // B toma el valor guardado de A

    // Muestra los valores luego del intercambio
    printf("Valores intercambiados: ");
    printf("A = %d, B = %d\n", a, b);

    printf("---------------------------");
    printf("\n --FIN--");
    return 0;
}
