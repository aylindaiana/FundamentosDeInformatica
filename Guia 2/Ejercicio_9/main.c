#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*9. Hacer un programa que permita determinar la cantidad de cifras que tiene un número
    que se ingresa por teclado. Usar números enteros positivos mayores a cero. Caso contrario, terminar el programa con un error. Si el número tiene más de 4 cifras, se debe
    mostrar en pantalla: “El número ingresado tiene más de 4 cifras”.*/
    printf("---------------------------------------------");
    printf("\n------Determinemos Cantidad de Cifras------");
    printf("\n-------------------------------------------");
    int numero; // Inicializo el espacio para ingresar un numero
    printf("\nIngrese un numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero); // Guardamo el numero en su espacio

    if(numero <0){ // Para uso de nros positivos mayores a cero
        printf("\n---ERROR: No debes ingresar numeros MENORES A CERO---");
        printf("\n---Intentalo nuevamente---");
        return 0; // Finalizamos el programa
    }
    if(numero <10){
        printf("\nEl numero %d tiene UNA cifra", numero); //Informo al usuario la cifra
    } else if(numero>=10&&numero<100){
        printf("\nEl numero %d tiene DOS cifras", numero); //Informo al usuario la cifra
    } else if(numero>=100 && numero<1000){
        printf("\nEl numero %d tiene TRES cifras", numero); //Informo al usuario la cifra
    } else if(numero>=1000 && numero<10000){
        printf("\nEl numero %d tiene CUATRO cifras", numero); //Informo al usuario la cifra
    } else{
        printf("\nEl numero %d tiene MAS DE CUATRO cifras", numero); //Informo al usuario la cifra
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
