#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

    /*1. Haga un programa en C que permita almacenar en una estructura datos de un cliente.
Los datos que debe almacenar y luego mostrar en pantalla son: Razón Social, Dirección,
Teléfono, Nombre del Contacto y Precio de la última compra realizada.*/
struct cliente{ // Defino la estructura del cliente
    char razon_social[30]; // Guardo la variable con su correspondiente tipo de dato
    char direccion [30]; // Guardo la variable con su correspondiente tipo de dato
    char nombre_contacto[30]; // Guardo la variable con su correspondiente tipo de dato
    int telefono; // Guardo la variable con su correspondiente tipo de dato
    float precio_ultima_compra; // Guardo la variable con su correspondiente tipo de dato
} cli1; // Creo una variable llamada cli1 del tipo struct cliente
int main(){
    printf("¡¡Complete los datos del cliente!!"); // Mensaje informativo al usuario

    printf("\nIngrese el nombre del contacto: "); // Solicito al usuario
    scanf(" %[^\n]", cli1.nombre_contacto); // Guardo la informacio en la variable

    printf("\nIngrese la razon social: "); // Solicito al usuario
    scanf(" %[^\n]", cli1.razon_social); // Guardo la informacio en la variable

    printf("\nIngrese la direccion: "); // Solicito al usuario
    scanf(" %[^\n]", cli1.direccion); // Guardo la informacio en la variable

    printf("\nIngrese su telefono: "); // Solicito al usuario
    scanf("%d", &cli1.telefono); // Guardo la informacio en la variable

    printf("\nIngrese su precio de la ultima compre: "); // Solicito al usuario
    scanf("%f", &cli1.precio_ultima_compra); // Guardo la informacio en la variable

    printf("\n El nombre del contacto es: %s,\n junto a su razon social: %s \n siguiendo con su direccion: %s, \n Su telefono es: %d \n y su ultima compra: %.2f", cli1.nombre_contacto, cli1.razon_social, cli1.direccion, cli1.telefono, cli1.precio_ultima_compra);
    return 0;
}

