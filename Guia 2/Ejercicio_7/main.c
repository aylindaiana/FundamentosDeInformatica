#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*7. Hacer un programa que permita ingresar 3 (tres) números enteros por teclado, mayores
a 0. Determinar cuál es el mayor, cuál es el menor y cuál es el del centro.*/
    printf("-------------------------------------");
    printf("\n-------BIENVENIDO AL PROGRAMA------");
    printf("\n-----------------------------------");
    int num1, num2, num3; // Inicializo el espacio para ingresar los tres numeros y auxiliares
    printf("\n--- Debe ingresar 3 numeros enteros (mayores a cero y no igules)---"); // Informo al usuario la condicion de ser mayor a cero
    printf("\nIngrese el primer numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &num1); // Guardamo el numero en su espacio
    printf("\nIngrese el segundo numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &num2); // Guardamo el numero en su espacio
    printf("\nIngrese el TERCER numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &num3); // Guardamo el numero en su espacio
    if(num1<0 || num2<0 || num3<0){  // Condiciono que si aparece un numero negativo (no debe ir "&" por que no cumple)
        printf("\n---No debes ingresar numeros MENORES A CERO---");
        printf("\n---Intentalo nuevamente---");
        return 0; // Finalizamos el programa
    }else if(num1==num2 || num2==num3){
        printf("\n---No debes ingresar numeros IGUALES---");
        printf("\n---Intentalo nuevamente---");
        return 0; // Finalizamos el programa
    }
    else if(num1>num2 && num2>num3){
        printf("\nEl numero %d es el mayor, el numero %d es el central y el %d el menor", num1, num2, num3); //Informo al usuario el orden
    }
    else if (num2>num1 && num1>num3){
        printf("\nEl numero %d es el mayor, el numero %d es el central y el %d el menor", num2, num1, num3); //Informo al usuario el orden
    }else {
        printf("\nEl numero %d es el mayor, el numero %d es el central y el %d el menor", num3, num2, num1); //Informo al usuario el orden
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");

    return 0;
}
