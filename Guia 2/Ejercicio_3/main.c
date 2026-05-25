#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Escriba un programa que permita ingresar 2 valores por teclado. A continuación, los
    ///muestre en pantalla indicando cuál de los dos es el mayor. Si fueran iguales, se debe
    ///indicar en pantalla que son iguales.

    int valor1, valor2; //ingreso un enumero entero
    printf("----------->");
    printf("Ingrese un numero: "); //Le solicito al usuario que ingrese un numero
    scanf("%d", &valor1); // Lo guardo
    printf("\n----------->");
    printf("Ingrese el segundo numero: "); //Le solicito al usuario que ingrese un numero
    scanf("%d", &valor2); // Lo guardo
    printf("---------------------------\n");
    if(valor1>valor2){ //Abro la condicional y consulto si es mayor
        printf("El mayor es %d ", valor1); //Informo el caso satisfactorio
    }else if(valor1 ==valor2){
        printf(" Ambos valores son iguales"); // Informo que el numero es igual a 100
    }
    else{
        printf(" El mayor es %d", valor2); // Informa que su numero es menor a 100
    }
    printf("\n---------------------------");
    printf("\n --FIN--");
    return 0;
}
