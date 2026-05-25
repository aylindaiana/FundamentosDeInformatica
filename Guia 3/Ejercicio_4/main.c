#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*4. Hacer una modificación al programa anterior, pero para que se imprima el promedio
de los pares.*/
    int numero, pares, impares, cont; // Inicializo el espacio para ingresar los numeros y para calcular
    float promedio;
    printf("-----------------------------------");
    printf("\n-----BIENVENIDO AL PROGRAMA-----");
    printf("\n---------------------------------");
    cont=0; // Inicializo en cero para no inicializar con residuos
    pares=0; // Inicializo en cero para no inicializar con residuos
    impares=0; // Inicializo en cero para no inicializar con residuos

    for(int i=0; i<20;i++){
        printf("\nIngrese el numero: "); // Pedimos que se ingrese un numero
        scanf("%d", &numero); // Guardamo el numero en su espacio
        if(numero %2==0){
            pares++;
            cont+=numero; // Voy sumando y guardando en cont
        }else{
            impares++;
        }
    }
    promedio= cont/20.0;

    printf("\nLa cantidad de pares son: %d, IMPARES: %d, PROMEDIO: %f", pares, impares, promedio); // Informo al usuairo el resultado
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
