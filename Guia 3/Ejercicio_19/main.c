#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*19. Hacer un programa que permita el ingreso de números por teclado, hasta que se ingrese
    el valor 0. Al finalizar, debe mostrarse en pantalla el mayor de todos los números
    ingresados.*/
    printf("\n-----------------------------------------------------");
    printf("\n-----------Busquemos el mayor------------------");
    printf("\n----------------------------------------------------");
    int mayor=0, numero; // Inicializo el espacio para ingresar el numero y el espacio para guardar el mayor

    do{
        printf("\nIngrese un numero: "); // Pedimos que se ingrese un numero
        scanf("%d", &numero); // Guardamo el numero en su espacio
        if(numero>mayor){
            mayor=numero; // si numero es mayor en la variable mayor pasa a ser el numero
        }
        printf("\nEl mayor numero es %d", mayor); // Informo al usuario el numero que es mayor
    }while(numero!=0); // Que continue el programa mientras numero sea distinto de CERO
    printf("\n---------------------------------");
    printf("\n---FIN DEL PROGRAMA---");
    return 0;
}
