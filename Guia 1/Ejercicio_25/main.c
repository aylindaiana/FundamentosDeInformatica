#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*25. Escriba un programa que pregunte por su nombre, su edad y su peso, y que muestre
    dicha información en pantalla.*/
    char nombre[50]; // Variable para guardar el nombre con cadena de caracteres
    int edad; // Variable para la edad
    float peso; // Variable para el peso

    printf("Ingrese su nombre: "); // Solicito el nombre
    scanf("%s", nombre); // Guardo el nombre (sin espacios)

    printf("Ingrese su edad: "); // Solicito la edad
    scanf("%d", &edad); // Guardo la edad

    printf("Ingrese su peso: "); // Solicito el peso
    scanf("%f", &peso); // Guardo el peso

    printf("\n------------------------------");
    printf("\nNombre: %s", nombre); // Muestro el nombre
    printf("\nEdad: %d anos", edad); // Muestro la edad
    printf("\nPeso: %.2f kg", peso); // Muestro el peso
    printf("\n------------------------------");

    printf("\n--FIN--"); // Fin del programa
    return 0;
}
