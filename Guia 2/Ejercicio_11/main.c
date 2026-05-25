#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*11. Hacer un programa que permita resolver una ecuación de primer grado: a · X + b = 0.
    El programa debe permitir el ingreso de valores de los coeficientes, considerando que si
    el coeficiente a = 0, no existe la ecuación. Caso contrario, se pide hallar X y mostrarlo
    en pantalla*/
    printf("---------------------------------------------");
    printf("\n------Resolvemos ecuacion a · X + b = 0.------");
    printf("\n-------------------------------------------");
    int a, b; // Inicializo el espacio para ingresar un numero
    float x;
    printf("\nIngrese el valor de a: "); // Pedimos que se ingrese un numero
    scanf("%d", &a); // Guardamo el numero en su espacio
    printf("\nIngrese el valor de b: "); // Pedimos que se ingrese un numero
    scanf("%d", &b); // Guardamo el numero en su espacio

    if(a==0){ // Para uso de nros positivos mayores a cero
        printf("\n---ERROR: La ecuacion no existe---");
        printf("\n---Intentalo nuevamente---");
        return 0; // Finalizamos el programa
    } else {
        x= (float)(-b) / (float)a; // Los determino con float al lado para que los numeros enteros den un resultado a x
        printf("\nSiendo a:%d y b:%d entonces el valor X es %.3f", a, b, x);
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
