#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Libreria para poder usar isalpha()
#include <string.h> // Libreria para strlen ()
int main()
{
    /*11. Escribir un programa que lea del teclado una cadena y muestre en pantalla la cantidad
de consonantes y de vocales que contiene.*/
    char cadena[50];
    char vocales[11] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; // Considero a todas las variables en minuscula y mayuscula
    int cons = 0, vocal = 0, esvocal = 0;

    printf("Ingrese una frase: ");
    gets(cadena); // Para leer la frase con espacios incluidos

    for(int i = 0; i < strlen(cadena); i++){ // strlen(cadena) para leer SOLO lo que el usuario escribió
        if(isalpha(cadena[i])){ // Verifico si el caracter actual es una letra del alfabeto
            for(int j = 0; j < 10; j++){
                esvocal = 0; // Bajo la bandera ANTES de empezar a buscar en las vocales
                if(cadena[i] == vocales[j]){ // Comparo la letra actual con las 10 vocales
                    vocal++;
                    esvocal = 1; // Levanto la bandera de que encontró
                    break; // Corto la busqueda porque ya encontramos que es vocal
                }
            }
            if(esvocal==0){ // Evaluo si la bandera nunca se levantó es consonante
                cons++;
            }
        }
    }

    printf("La cadena ingresada tiene %d vocales y %d consonantes", vocal, cons);
    return 0;
}
