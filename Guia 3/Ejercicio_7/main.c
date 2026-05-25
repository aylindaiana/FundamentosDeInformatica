#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*7. Crear un programa que nos calcule el promedio de N números introducidos por teclado.*/
    printf("-----------------------------------");
    printf("\n-----BIENVENIDO AL PROGRAMA-----");
    printf("\n---------------------------------");
    int numero_total, numero, acu=0; // Inicializo el espacio para ingresar el numero
    float promedio=0;
    printf("Ingrese la cantidad de Numeros a ingresar para realizar el promedio: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero_total); // Guardamo el numero en su espacio
    for(int i=0; i<numero_total; i++){
        printf("Ingrese un numero: "); // Pedimos que se ingrese un numero
        scanf("%d", &numero); // Guardamo el numero en su espacio
        acu+=numero; // Voy acumulando la suma
    }
    promedio = acu / (float)numero_total; // Realizo el calculo sabiendo que "num_total" es int
    printf("El promedio de los numeros ingresados es: %.2f", promedio); // Informo el resultado final
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
