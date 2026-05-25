#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*16. Hacer un programa donde se solicite que ingrese las iniciales de su nombre. Deben ser
    3 iniciales y se deben ingresar de a una a la vez. Luego, se pide mostrar en pantalla las
    tres letras (iniciales) de su nombre, separadas por un (−).*/
    char inicial1, inicial2, inicial3; // Variables para guardar las 3 iniciales

    printf("Ingrese 1er Inicial: "); // Solicito la primera inicial
    scanf(" %c", &inicial1); // Guardo la inicial

    printf("Ingrese 2da Inicial: "); // Solicito la segunda inicial
    scanf(" %c", &inicial2); // Guardo la inicial

    printf("Ingrese 3er Inicial: "); // Solicito la tercera inicial
    scanf(" %c", &inicial3); // Guardo la inicial
    printf("\n------------------------------");
    printf("\nUd. ingreso: %c-%c-%c", inicial1, inicial2, inicial3); // Muestro las iniciales con el formato pedido
    printf("\n------------------------------");
    printf("\n--FIN--"); // Final del programa
    return 0;
}
