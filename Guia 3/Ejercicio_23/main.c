#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*23. Multiplicar los números introducidos por el usuario que estén en el
    rango (1,10). Terminar cuando el usuario introduzca un número fuera del rango y mostrar
    el resultado.
*/
    int numero, multi=1;

    printf("Ingrese un numero del (1 al 10): ");  // Pedimos que se ingrese un numero del 1 al 10
    scanf("%d", &numero ); // Guardamo el numero en su espacio
    // Se debe calcular de MAYOR a MENOR!!!!!
    while(numero<11 && numero>0){ // Determinar que mientras
        multi*=numero;
        printf("\nIngrese un numero del (1 al 10): ");  // Pedimos que se ingrese un numero del 1 al 10
        scanf("%d", &numero ); // Guardamo el numero en su espacio
    }
    printf("\nLa multiplicacion final es: %d ", multi);  // Informamos resultados
    printf("\n---------------------------------");
    printf("\n---FIN DEL PROGRAMA---");
    return 0;

}
