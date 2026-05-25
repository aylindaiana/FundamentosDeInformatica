#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float a, b, c, x1, x2, discriminante; // Variables de la ecuación y las raices

    printf("Ingrese el valor de a: "); // Solicito al usuario que ingrese a
    scanf("%f", &a); // Guardo la a

    printf("Ingrese el valor de b: "); // Solicito al usuario que ingrese b
    scanf("%f", &b); // Guardo la b

    printf("Ingrese el valor de c: "); // Solicito al usuario que ingrese c
    scanf("%f", &c); // Guardo la c

    discriminante = b*b - 4*a*c; // Calculo el discriminante

    x1 = (-b + sqrt(discriminante)) / (2*a); // Calculo la primera raíz
    x2 = (-b - sqrt(discriminante)) / (2*a); // Calculo la segunda raíz

    printf("\n------------------------------");
    printf("\nLas raices son:");
    printf("\nX1 = %.2f", x1);
    printf("\nX2 = %.2f", x2);
    printf("\n------------------------------");

    printf("\n--FIN--");
    return 0;
}
