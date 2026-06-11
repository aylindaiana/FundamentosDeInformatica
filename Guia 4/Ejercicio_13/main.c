#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Libreria para poder usar isalpha()
#include <string.h> // Libreria para strlen ()
int main()
{
    /*13. Ingresar una cadena, verificar si está en minúscula,
    y convertirla a mayúsculas y viceversa. Utilizar funciones de la librería string.h.*/
    char cadena[50];
    int cantidad=0, mayus=0, minus=0;
    printf("Ingrese una palabra: ");
    gets(cadena);
    for(int i=0; i<strlen(cadena); i++){
        if(isalpha(cadena[i])){ // Si esa determinada letra es alfabeto
            cantidad++; // Cuento la catidad de letras no numericas encontradas
            if(islower(cadena[i])){
                minus++; // Si es minúscula, sumamos al contador de minúsculas
            } else if(isupper(cadena[i])){
                mayus++; // Si es mayúscula, sumamos al contador de mayúsculas
            }
        }
    }
        if(cantidad == minus){ // Evaluamos si el total de letras reales es igual al total de minúsculas
            printf("\nLa palabra ingresada esta en minuscula! \nDe esta manera se ve en mayuscula: ");
            for(int i=0; i<strlen(cadena);i++){ // Vuelvo a recorrer la palabra para imprimirla convertida
                printf("%c", toupper(cadena[i])); // Uso 'toupper' para convertir
            }
        } else if(cantidad == mayus){ // Evaluamos si el total de letras reales es igual al total de mayúsculas
            printf("\nLa palabra ingresada esta en mayuscula! \nDe esta manera se ve en minuscula: ");
            for(int i=0; i<strlen(cadena);i++){ // Vuelvo a recorrer la palabra para imprimirla convertida
                printf("%c", tolower(cadena[i])); // Uso 'tolower' para convertir
            }
        } else {
            printf("\nLa palabra no es ni toda minuscula ni toda mayuscula, es mixta."); // Si hay una mezcla de mayúsculas y minúsculas (o si solo ingreso numeros)
        }

    return 0;
}
