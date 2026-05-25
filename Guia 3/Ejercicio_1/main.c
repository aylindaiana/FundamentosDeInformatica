#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1. Hacer un programa que permita al usuario ingresar un número entero. Luego, se debe
imprimir dicho número 50 veces en pantalla, separados por un – (guión). Ej: 10 – 10 –
10 – 10 – 10 – 10 – 10 – . . .*/
    int numero; // Inicializo el espacio para ingresar los numeros y para calcular
    printf("-----------------------------------");
    printf("\n-----BIENVENIDO AL PROGRAMA-----");
    printf("\n---------------------------------");
    printf("\nIngrese el numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero); // Guardamo el numero en su espacio
    for(int i=0; i<50;i++){
        printf("%d-", numero);
    }
    printf("%d", numero); // Informo al usuairo el resultado
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
