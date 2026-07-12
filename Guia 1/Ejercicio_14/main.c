#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*14. Haga un programa donde se deban introducir 2 valores enteros por teclado. El primer
    valor se debe guardar en una variable llamada a. El 2do en otra llamada b. Luego el
    programa debe resolver la ecuación: (a − b)(a + b).*/
    int a, b; // Declaro las variables enteras

    printf("Ingrese el valor de a: "); // Solicito el primer valor
    scanf("%d", &a); // Guardo el valor en a

    printf("Ingrese el valor de b: "); // Solicito el segundo valor
    scanf("%d", &b); // Guardo el valor en b

    int resultado; // Variable para guardar el resultado

    resultado = (a - b) * (a + b); // Calculo la formula (a - b)(a + b)
    printf("\n------------------------------");
    printf("El resultado de (a - b)(a + b) es: %d\n", resultado); // Muestro el resultado
    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del ejercicio

    return 0;
}
