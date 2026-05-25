#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*12. Escriba un programa que permita calcular la superficie de un triángulo rectángulo. El
    programa debe permitir el ingreso de los valores por teclado y mostrar el resultado por
    pantalla
    */
    float base, altura, superficie; // Declaración de las tres variables decimales
    printf("Introduzca la base: "); //Solicito al usuario ingresar el primer numero
    scanf("%f", &base); //Guardo lo ingresado
    printf("Introduzca la altura: "); //Solicito al usuario ingresar el segundo numero
    scanf("%f", &altura); //Guardo lo ingresado
    superficie = (base * altura) / 2; //Calculo la superficie
    printf("\n------------------------------");
    printf("La superficie del triangulo rectangulo es: %.2f\n", superficie); // Muestro la superficie del triangulo
    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del ejercicio
    return 0;
}
