#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*18. Escribir un programa que permita ingresar números por teclado, y que muestre en
    pantalla si el número ingresado es par o impar. El programa terminará cuando se
    ingrese 0.*/
    printf("\n-----------------------------------------------------");
    printf("\n----------- ¿¿¿PARES O IMPARES???------------------");
    printf("\n----------------------------------------------------");
    int numero; // Inicializo el espacio para ingresar el numero

    do{
        printf("\nIngrese un numero: ", numero); // Pedimos que se ingrese un numero
        scanf("%d", &numero); // Guardamo el numero en su espacio
        if(numero==0){ // De esta manera evitamos que el 0 se evalue
            break;
        }
        if(numero%2==0){
            printf("\nEste numero %d es PAR ", numero);  // Informo al usuario el resultado
        }else{
            printf("\nEste numero %d es IMPAR ", numero); // Informo al usuario el resultado
        }
    }while(numero!=0); // Que continue el programa mientras numero sea distinto de CERO
    printf("\n---------------------------------");
    printf("\n---FIN DEL PROGRAMA---");
    return 0;
}
