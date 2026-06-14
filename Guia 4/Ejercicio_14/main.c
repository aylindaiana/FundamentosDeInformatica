#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Libreria para poder usar isalpha()
#include <string.h> // Libreria para strlen ()
/*14. Hacer un programa que permita ingresar el nombre y apellido de dos personas. Verificar
si se llaman igual (ya sea de nombre o de apellido). */
int main(){
    /*14. Hacer un programa que permita ingresar el nombre y apellido de dos personas. Verificar
si se llaman igual (ya sea de nombre o de apellido).*/
    char nombre1[50],nombre2[50],  apellido1[50],  apellido2[50]; // variables para los nombres y apellidos
    printf("Ingrese el primer nombre: ");
    gets(nombre1); // Lee la entrada hasta presionar Enter
    printf("Ingrese el segundo nombre: ");
    gets(nombre2); // Lee la entrada hasta presionar Enter
    printf("Ingrese el primer apellido: ");
    gets(apellido1); // Lee la entrada hasta presionar Enter
    printf("Ingrese el segundo apellido: ");
    gets(apellido2); // Lee la entrada hasta presionar Enter
    if(strcmp(nombre1, nombre2)==0){ // Uso strcmp, Si son iguales tirara cero
        printf("Los nombres son iguales"); // Informo al usuario
    } else {
        printf("Los nombres NO son iguales"); // Informo al usuario
    }
    if(strcmp(apellido1, apellido2)==0){ // Si son iguales tirara cero
        printf("\nLos apellidos son iguales"); // Informo al usuario
    } else {
        printf("\nLos apellidos NO son iguales"); // Informo al usuario
    }
    return 0;
}
