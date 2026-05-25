#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*20. Hacer un programa donde se permita el ingreso por teclado de un número entre 1
y 99. Dicho número será la supuesta edad de un individuo. Si el número ingresado
está entre 1 y 12 el programa debe imprimir “ES UN NIÑO”. Si está entre 12 y 21
“ES ADOLESCENTE”. Si el número está entre 21 y 69 “ES ADULTO”. Para números
mayores a 69 “TERCERA EDAD”. El programa finaliza cuando se ingresa 0.*/
    printf("\n-----------------------------------------------------");
    printf("\n----------- QUIEN ES MAYOR------------------");
    printf("\n----------------------------------------------------");
    int numero; // Inicializo el espacio para ingresar el numero

    printf("\nIngrese un numero del 1 al 99: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero); // Guardamo el numero en su espacio

    while(numero!=0){
        if(numero>69 && numero<=99){ // Debo empezar desde el más grande!!!
            printf("\nTERCERA EDAD");
        } else if(numero>21 && numero<=69){ // numero>+chico && numero<=+grande
            printf("\nES ADULTO");
        } else if (numero>12 && numero<=21){ // numero>+chico && numero<=+grande
            printf("\nES ADOLESCENTE");
        } else if(numero>=1 && numero<=12){ // numero>+chico && numero<=+grande
            printf("\nES UN NINIO");
        }else{
            printf("\nDebe ingresar edad del 1 al 99");
            printf("\nIntentelo nuevamente");
            printf("\n---------------------------------");
        }
        printf("\nIngrese un numero del 1 al 99: "); // Ingreso nuevamente el espacio para ingresar el numero
        scanf("%d", &numero); // Guardo el numero
    }
    printf("\n---------------------------------");
    printf("\n---FIN DEL PROGRAMA---");
    return 0;
}
