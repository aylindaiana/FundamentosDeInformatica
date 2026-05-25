#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*21. Calcular la suma de los números introducidos por el usuario.
    Terminar cuando introduzca cero. Imprimir la suma en pantalla.*/
    printf("\n-----------------------------------------------------");
    printf("\n-----------CALCULEMOS LA SUMA-----------------");
    printf("\n----------------------------------------------------");
    int numero, suma=0; // Inicializo el espacio para ingresar el numero
    printf("\nIngrese un numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero); // Guardamo el numero en su espacio
    while(numero!=0){ // El programa debe continuar mientras el numero sea distinto de cero
        suma+=numero;

        printf("\n---------------------------------");
        printf("\nIngrese un numero: "); // Pedimos que se ingrese un numero
        scanf("%d", &numero);// Guardamo el numero en su espacio
    }
    printf("\nLa suma es %d ", suma); // Informamos resultados
    printf("\n---------------------------------");
    printf("\n---FIN DEL PROGRAMA---");
    return 0;
}
