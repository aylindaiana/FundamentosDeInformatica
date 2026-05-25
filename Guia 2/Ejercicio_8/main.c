#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*8. Hacer un programa que permita ingresar 3 (tres) números por teclado. Determinar si
    el tercero es igual a la suma de los 2 (dos) primeros.*/
    printf("-------------------------------------");
    printf("\n-------BIENVENIDO AL PROGRAMA------");
    printf("\n-----------------------------------");
    int num1, num2, num3, suma=0; // Inicializo el espacio para ingresar los tres numeros y auxiliares
    printf("\nIngrese el primer numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &num1); // Guardamo el numero en su espacio
    printf("\nIngrese el segundo numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &num2); // Guardamo el numero en su espacio
    printf("\nIngrese el TERCER numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &num3); // Guardamo el numero en su espacio
    suma= num1 + num2;
    if(num3 == suma){
        printf("\nEl numero %d ingresado es igual a la suma de %d + %d", num3, num1, num2); // Informo al usuario que la igual es mayor al tercer numero ingresado
    } else {
        printf("\nEl numero %d ingresado NO es igual a la suma de %d + %d", num3, num1, num2); // Informo al usuario que la igual NO es mayor al tercer numero ingresado
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
