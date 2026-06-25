#include <stdio.h>
#include <stdlib.h>


/*2. Repita el ejercicio anterior, pero esta vez arme un array de esa misma estructura, de
forma tal que le permita ingresar y almacenar información para 5 clientes. Luego debe
mostrar toda la información en pantalla, ordenada por cliente.*/
struct cliente{ // Defino la estructura del cliente
    char razon_social[30]; // Guardo la variable con su correspondiente tipo de dato
    char direccion [30]; // Guardo la variable con su correspondiente tipo de dato
    char nombre_contacto[30]; // Guardo la variable con su correspondiente tipo de dato
    int telefono; // Guardo la variable con su correspondiente tipo de dato
    float precio_ultima_compra; // Guardo la variable con su correspondiente tipo de dato
} clientes[5]; // Creo un array para permitir ingresar hasta 5 clientes
int main(){
    printf("!!Complete los datos del cliente!!"); // Mensaje informativo al usuario

    for(int i=0; i<5;i++){
        printf("\nCliente Nro: %d", i+1);
        printf("\nIngrese el nombre del contacto: "); // Solicito al usuario
        scanf(" %[^\n]", clientes[i].nombre_contacto); // Guardo la informacio en la variable
        printf("\nIngrese la razon social: "); // Solicito al usuario
        scanf(" %[^\n]", clientes[i].razon_social); // Guardo la informacio en la variable
        printf("\nIngrese la direccion: "); // Solicito al usuario
        scanf(" %[^\n]", clientes[i].direccion); // Guardo la informacio en la variable
        printf("\nIngrese su telefono: "); // Solicito al usuario
        scanf("%d", &clientes[i].telefono); // Guardo la informacio en la variable
        printf("\nIngrese su precio de la ultima compre: "); // Solicito al usuario
        scanf("%f", &clientes[i].precio_ultima_compra); // Guardo la informacio en la variable
    }
    for(int i=0;i<5;i++){
        printf("\nCliente %d:\n", i+1);
        printf("Nombre del contacto: %s\n", clientes[i].nombre_contacto); // Informo al usuario
        printf("Razon social: %s\n", clientes[i].razon_social); // Informo al usuario
        printf("Direccion: %s\n", clientes[i].direccion); // Informo al usuario
        printf("Telefono: %d\n", clientes[i].telefono); // Informo al usuario
        printf("Precio ultima compra: %.2f\n", clientes[i].precio_ultima_compra); // Informo al usuario
    }
    return 0;
}
