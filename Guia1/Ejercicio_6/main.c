#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*6) Hacer un programa que nos pregunte el año de nacimiento, el año actual, y nos calcule
    nuestra edad.*/

    int anio_nacimiento, anio_actual, edad_actual; //Ingreso las variables que necesito en entero
    printf("-----------> ");
    printf("Ingrese el anio actual: ");//Pido al usuario ingresar el segundo entero
    scanf("%d", &anio_actual);// Guardo el anio ingresado
    printf("-----------> ");
    printf("Ingrese su anio de nacimiento: "); // Pido al usuario ingresar el primer entero
    scanf("%d", &anio_nacimiento); // Guardo lo ingresado

    edad_actual = anio_actual - anio_nacimiento; // Calculo la edad

    printf("\n Su edad es: %d", edad_actual);  // Muestra el resultado por pantalla
    printf("\n---------------------------");
    printf("\n --FIN--");// Mensaje de cierre
    return 0;
}
