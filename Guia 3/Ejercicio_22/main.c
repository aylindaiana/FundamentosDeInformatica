#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*22. Contar la cantidad de números impares que son introducidos por el usuario.
    Terminar cuando se introduzca el primer número par. Al finalizar, mostrar en pantalla el
promedio de los números impares y el contador.
*/
    printf("\n-----------------------------------------------------");
    printf("\n-----------CALCULEMOS EL PROMEDIO-----------------");
    printf("\n----------------------------------------------------");
    int numero, suma=0, contador=0; // Inicializo el espacio para ingresar el numero y la suma con el contadora para los calculos
    float promedio;

    printf("\nIngrese el numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero); // Guardamo el numero en su espacio

    while(numero%2!=0){ // Determino que mientras que el numero no sea par siga el programa
        suma+=numero;
        contador++;
        printf("\nIngrese el numero: ");  // Pedimos que se ingrese un numero
        scanf("%d", &numero); // Guardamo el numero en su espacio

    }
    promedio = suma/contador;
    printf("\nEl promedio es: %.2f", promedio);  // Informamos resultados
    printf("\n---------------------------------");
    printf("\n---FIN DEL PROGRAMA---");
    return 0;
}
