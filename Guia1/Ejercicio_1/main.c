#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escriba un programa que permita al usuario introducir 2 números enteros por teclado,
    y que realice la suma y luego la resta de ambos números, mostrando en pantalla ambos
    resultados. */
    int num1, num2, suma,resta;  // Especifico el formato e ingreso mis variables
    printf("----------->");
    printf("Ingrese un numero entero: "); // Solicito al usuario un numero entero
    scanf("%d", &num1);// Guardo en variable el valor ingresado
    printf("----------->");
    printf("Ingrese otro numero entero: "); // Solicito al usuario el segundo entero
    scanf("%d", &num2);// Guardo en variable el segundo ingresado
    suma=num1+num2; //Realizo el calculo de la suma
    resta=num1-num2; //Realizo el calculo de la resta

    printf("\n Su suma es: %d", suma); // Muestra el resultado por pantalla
    printf("\n---------------------------");
    printf("\n Su resta es: %d", resta); // Muestra el resultado por pantalla
    printf("\n --FIN--"); // Fin del programa
    return 0;
}
