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
            if(islower(cadena[i])){
                minus++;
            } else if(isupper(cadena[i])){
                mayus++;
            }
        }
    }
        if(cantidad == minus){
            printf("\nLa palabra ingresada esta en minuscula! \nDe esta manera se ve en mayuscula: ");
            for(int i=0; i<strlen(cadena);i++){
                printf("%c", isupper(cadena[i]));
            }
        } else if(cantidad == mayus){
            printf("\nLa palabra ingresada esta en mayuscula! \nDe esta manera se ve en minuscula: ");
            for(int i=0; i<strlen(cadena);i++){
                printf("%c", islower(cadena[i]));
            }
        } else {
            printf("\nLa palabra no es ni toda minuscula ni toda mayuscula, es mixta.");
        }

    return 0;
}
