#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*7. Hacer un programa que nos pregunte el primer nombre, y nos salude. Ej.: Hola Gastón*/
    char nombre[50];  // Determino caracteres para guardar el nombre

    printf("Ingrese su nombre: "); //Pido al usuario ingresar el nombre
    scanf("%s", nombre);  // Guardo lo ingresado

    printf("Hola %s", nombre);  // muestra el saludo
    printf("\n--------------------");
    printf("\n--FIN--");// Mensaje de cierre
    return 0;
}
