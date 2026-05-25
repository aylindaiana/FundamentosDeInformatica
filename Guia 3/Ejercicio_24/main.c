#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*24. Contar el número de números pares que introduzca el usuario y el número de impares.
Terminar cuando el usuario introduzca el número 100.*/
    int numero, pares=0, impares=0; // Inicializo lugra para ingresar el numero e inicializo en cero para sumar los pares e impares

    printf("Ingrese un numero: "); // Dejo lugar para guardar el numero
    scanf("%d", &numero); // Inicializo con d que es de numero entero y lo guardo en su variable
    printf("\n-------------------------");
    printf("\nPara finalizar el programa debe ingresar el numero << 100 >>");
    printf("\n-------------------------");
    while(numero!=100){ // Determino que el programa avance mientras el numero sea distinto de 100
        if(numero%2==0){ // la condicional sea par
            pares++;
        } else {
            impares++;
        }
        printf("\nIngrese un numero: ");  // Dejo lugar para guardar el numero
        scanf("%d", &numero); // Inicializo con d que es de numero entero y lo guardo en su variable
    }
    printf("\nLa totalidad de PARES es %d y totalidad de IMPARES es %d ", pares, impares); // Informo el reusltado
    return 0;
}
