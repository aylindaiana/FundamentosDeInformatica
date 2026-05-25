#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*19. Se pide ingresar el sueldo de un trabajador expresado con 2 decimales. Si el sueldo
    ingresado es menor a $15.000, se le debe aplicar un incremento del 15 %. Para sueldos
    comprendidos entre $15.000 y $25.000, el incremento debe ser del 10.5 % y para sueldos
    superiores a $25.000, el incremento debe ser del 8 %. Mostrar en pantalla el sueldo
    ingresado, el porcentaje a incrementar y el sueldo con incremento. */
    printf("---------------------------------------------");
    printf("\n---Calculamos el sueldo con su incremento---");
    printf("\n-------------------------------------------");
    float sueldo, sueldo_incrementado; // Inicializo el espacio para ingresar los numeros

    printf("\nIngrese su sueldo expresado con 2 decimales: "); // Pedimos que se ingrese un numero
    scanf("%f", &sueldo); // Guardamo el numero en su espacio

    if(sueldo < 15000){
        sueldo_incrementado = sueldo * 1.15; // Realizamos el calculo
        printf("\nEl incremento es del 15%%"); // Informamos el incremento con su porcentaje
    } else if(sueldo >= 15000 && sueldo < 25000){
        sueldo_incrementado = sueldo * 1.105; // Realizamos el calculo
        printf("\nEl incremento es del 10.5%%"); // Informamos el incremento con su porcentaje
    } else{
        sueldo_incrementado = sueldo * 1.08; // Realizamos el calculo
        printf("\nEl incremento es del 8%%"); // Informamos el incremento con su porcentaje
    }
    printf("\nSueldo Ingresado: $%.2f", sueldo);
    printf("\nEl sueldo con incremento es de $%.2f", sueldo_incrementado); // Informamos el incremento con su porcentaje

    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
