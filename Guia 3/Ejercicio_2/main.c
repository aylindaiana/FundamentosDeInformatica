#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*2. Modificar el programa anterior, para que
    los números se impriman con doble interlineado y 1 tabulación.*/
    int numero; // Inicializo el espacio para ingresar los numeros y para calcular
    printf("-----------------------------------");
    printf("\n-----BIENVENIDO AL PROGRAMA-----");
    printf("\n---------------------------------");
    printf("\nIngrese el numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero); // Guardamo el numero en su espacio
    for(int i=0; i<50;i++){
        printf("\n\n\t%d", numero); //imprimo con dobles lineas y tabulador
    }
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
