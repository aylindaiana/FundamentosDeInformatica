#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Hacer un programa para determinar si un número ingresado por teclado es par o impar.
    ///Se pide que el programa tenga previamente una estructura de control para que, en el
    ///caso de que el número ingresado sea 0, se muestre un mensaje en pantalla indicando:
    ///“no te puedo decir si es par o impar”. En caso de que el número sea distinto de cero,
    ///entonces indicar en pantalla si es par o impar.
    int numero; //ingreso un numero entero
    printf("\n-----------------------------");
    printf("\nIngrese un numero: "); //Le solicito al usuario que ingrese un numero
    scanf("%d", &numero); // Lo guardo
    printf("\n-----------------------------");
    if(numero==0){ //condiciono que el modulo 2 sea igual a cero
        printf("\nno te puedo decir si es par o impar"); // Informo que el numero es igual a 100
    }else if(numero%2==0){
        printf("\nEl numero %d es PAR ", numero); //Informo que el numero es par
    }
    else{
        printf("\nEl numero %d es IMPAR ", numero); // Informa que el numero es impar
    }
    printf("\n---------------------------");
    printf("\n --FIN--");
    return 0;
}
