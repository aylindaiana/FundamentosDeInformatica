#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h> // Libreria para rand() y srand()
#include <time.h>   // y para time  incializa
int main()
{
    /*36. Haga un programa que permita mostrar en pantalla un número aleatorio comprendido
    entre 0 y 100. (Función srand()).*/
    int numero; // Variable para el numero aleatorio
    srand(time(NULL)); // Inicializa la semilla con la hora actual

    numero = rand() % 101; // Genera numero entre 0 y 100 inclusive

    printf("NUMERO ALEATORIO ENTRE 0 Y 100\n");

    printf("\n------------------------------");
    printf("\nNumero generado: %d", numero); // Muestro el numero final
    printf("\n------------------------------");

    printf("\n--FIN--");
    return 0;
}
