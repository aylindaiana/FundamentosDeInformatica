#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*25. Elaborar un algoritmo tal que solicite palabras hasta que se introduzca la palabra
“FIN” o “fin”. Mostrar cuántas palabras introdujo el usuario.
*/
    char palabra[50]; //Inicializo el espacio para insertar la palabra
    int cantidad=0;//Inicializo el espacio para insertar el contador
    printf("Ingrese una palabra: ");
    scanf("%s", &palabra);
    // No se pude comparar palabras explicitas!!!!!
    while(strcmp(palabra, "fin")!=0 && strcmp(palabra, "FIN")!=0){  // Mientras la palabra sea distinta a "fin" el programa continuara
        cantidad++; // Actualizo el contador
        printf("Ingrese una palabra: ");  // Pedimos que se ingrese un numero
        scanf("%s", &palabra); // Guardamo el numero en su espacio
    }
    printf("En total introdujeron %d palabras", cantidad); // Muestro el total
    return 0;
}
