#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Libreria para poder usar isalpha()
#include <string.h> // Libreria para strlen ()
int main()
{
    /*15. Ingresar una cadena de caracteres y mostrar por pantalla una cadena formada únicamente por las letras en mayúsculas de la cadena ingresada, o un mensaje en caso de
que la cadena ingresada no posea letras en mayúsculas. Ejemplo: cadena ingresada:
INFORMatica y ProgramACION. Muestra: INFORMACION.*/
    char palabras[50], mayuscula[50]; // Arreglo para guardar la cadena ingresada y otro para almacenar las mayúsculas
    int mayus=0; // Contador que indica la posición donde se guardará la próxima mayúscula
    printf("Ingrese una palabra: "); // Solicito al usuario que ingrese una cadena de caracteres
    gets(palabras); // Lee la cadena ingresada por teclado y la guarda en el arreglo palabras
    for(int i=0; i < strlen(palabras); i++){ // Recorre toda la cadena carácter por carácter
        if(isupper(palabras[i])){ // Si el caracter es una letra y esta en mayuscula
            mayuscula[mayus] = palabras[i]; // Guarda la letra mayúscula encontrada en el arreglo mayuscula
            mayus++;  // Avanza a la siguiente posición libre del arreglo mayuscula
        }
    }
    if (mayus > 0) { // Si se encontró al menos una letra mayúscula
        printf("Letras mayusculas encontradas: %s\n", mayuscula); // Muestra la cadena formada unicamente por letras mayúsculas
    } else {
        printf("No se encontraron letras mayusculas.\n"); // Informa que no se encontraron letras mayúsculas
    }
    return 0;
}
