#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*13. Escribir un programa que le pida una palabra al usuario, para luego imprimirla 1000
veces, con espacios intermedios.*/
    printf("\n----------------------------------");
    printf("\n----BIENVENIDO AL PROGRAMA----");
    printf("\n----------------------------------");
    char palabra[50]; // Inicializo el espacio para ingresar la palabra
    printf("\nIngresa una palabra: "); // Pedimos que se ingrese un numero
    scanf("%s", &palabra); // Guardamo la palabra en su espacio
    for(int i=0; i<1000;i++){ // Declaro que llegue hasta 1000
        printf("%s ", palabra); // Informo al usuario los resultados
    }
    printf("\n---------------------------------");
    printf("\n--FIN--");
    return 0;
}
