#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*10. Escribir un programa que lea 10 números por teclado. Luego leer dos más e indicar si
estos están entre los anteriores.
*/
    int numero[10], a, b; // Vector para guardar los primeros 10 números y dos variables para guardar los dos numeros extras
    int elijoa = 0, elijob = 0; //para saber si encontramos a y b.
    printf("Ingrese 10 numeros: ");
    for(int i=0; i<10;i++){
        printf("\nIngrese el numero en la posicion %d=: ", i+1);
        scanf("%d", &numero[i]);
    }
    printf("\nIngrese ahora dos numeros para buscar.");
    printf("\nIngrese el Primero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    for(int i = 0; i < 10; i++){
        if(numero[i] == a && elijoa == 0){ // Si el número en la posición actual es igual al que busco (a) y mi bandera sigue bajada la subo a 1
            elijoa = 1;
        }
        if(numero[i] == b && elijob == 0){ // Si el número en la posición actual es igual al que busco (b) y mi bandera sigue bajada la subo a 1
            elijob = 1;
        }
    }
    if(elijoa==1 && elijo==1){ // Evaluamos el estado de las banderas para imprimir el resultado correcto
        printf("\nLos dos ultimos numeros ingresados estan entre los anteriores");
    } else if(elijoa ==1) {
        printf("\nSolo el numero %d estaba entre los anteriores", a);
    } else if(elijob ==1) {
        printf("\nSolo el numero %d estaba entre los anteriores", b);
    } else {
        printf("\nNinguno de los ultimos dos numeros estaban entre los anteriores");
    }
    return 0;
}
