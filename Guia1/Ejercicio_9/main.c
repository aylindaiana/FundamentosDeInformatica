#include <stdio.h>
#include <stdlib.h>

int main()
{
/*9. Escriba un programa que permita realizar la división de 2 (dos) números del tipo coma
flotante ingresados por teclado.*/
    float num1, num2, resultado; // Declaración de las tres variables enteras
    printf("Ingrese el primer numero: "); //Solicito al usuario ingresar el primer entero
    scanf("%f", &num1); // Guardo lo ingresado
    printf("Ingrese el segundo numero: "); //Solicito al usuario ingresar el segundo entero
    scanf("%f", &num2); // Guardo lo ingresado
    resultado= num1/num2; //Calculo la division

    printf("El resultado de la division es: %.2f\n", resultado); //Muestro el resultado con solo 2nros

    printf("--FIN--"); //Fin del ejercicio

    return 0;
}
