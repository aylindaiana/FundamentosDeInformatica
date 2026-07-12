#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*18. Escriba un programa que permita calcular el área y el perímetro de un círculo cualquiera. El programa, al igual que el ejercicio anterior, deberá permitir el ingreso por
    teclado de la información necesaria para procesar el cálculo y mostrarlo en pantalla.*/
    float radio, area, perimetro; // Variable para el radio y area, perimetro

    printf("Ingrese el radio del circulo: "); // Solicito el dato
    scanf("%f", &radio); // Guardo el valor

    area = M_PI * radio * radio; // Calculo el area (π * r2) con "M_PI" de la libreria math
    perimetro = 2 * M_PI * radio; // Calculo el perímetro (2 * π * r)

    printf("\n------------------------------");
    printf("\nEl area del circulo es: %.2f", area); // Muestro area
    printf("\nEl perimetro del circulo es: %.2f", perimetro); // Muestro perímetro
    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del programa

    return 0;
}
