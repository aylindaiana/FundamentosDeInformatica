#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*17. Haga un programa que permita determinar qué tipo de ángulo es el valor ingresado
    por teclado (recto, agudo u obtuso).*/
    printf("---------------------------------------------");
    printf("\n------Identificamos el Angulo------");
    printf("\n-------------------------------------------");
    int angulo; // Inicializo el espacio para ingresar los tres numeros y auxiliares

    printf("\nIngrese un ANGULO: "); // Pedimos que se ingrese un numero
    scanf("%d", &angulo); // Guardamo el numero en su espacio

    if(angulo < 90 && angulo > 0){
        printf("\nEste es un angulo agudo"); // Informo el tipo de angulo del triangulo
    } else if(angulo == 90){
        printf("\nEste es un angulo recto"); // Informo el tipo de angulo del triangulo
    } else if(angulo > 90 && angulo < 180){
        printf("\nEste es un angulo obtuso"); // Informo el tipo de angulo del triangulo
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
