#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*22. Escriba un programa que permita ingresar 5 números enteros por teclado y que muestre
    en pantalla el promedio.
    Nota: Al igual que el programa anterior, se pide que se coloque un título para mostrar
    en pantalla qué hace el programa y sus resultados.*/

    int n1, n2, n3, n4, n5; // Variable para los 5 números enteros
    float promedio; // Variable para el promedio

    printf("CALCULAR EL PROMEDIO DE 5 NUMEROS ENTEROS\n");

    printf("Ingrese el primer numero: "); // Solicito el primer numero
    scanf("%d", &n1); // Guardo el valor

    printf("Ingrese el segundo numero: "); // Solicito el segundo numero
    scanf("%d", &n2); // Guardo el valor

    printf("Ingrese el tercer numero: "); // Solicito el tercer numero
    scanf("%d", &n3); // Guardo el valor

    printf("Ingrese el cuarto numero: "); // Solicito el cuarto numero
    scanf("%d", &n4); // Guardo el valor

    printf("Ingrese el quinto numero: "); // Solicito el quinto numero
    scanf("%d", &n5); // Guardo el valor

    promedio = (n1 + n2 + n3 + n4 + n5) / 5; // Calculo el promedio que es la suma de todos dividido su cantidad de variables

    printf("\n------------------------------");
    printf("\nEl promedio de los 5 numeros es: %.2f", promedio); // Muestro resultado del promedio
    printf("\n------------------------------");

    printf("\n--FIN--"); // Fin del programa
    return 0;
}
