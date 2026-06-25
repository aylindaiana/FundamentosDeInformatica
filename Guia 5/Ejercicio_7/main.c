#include <stdio.h>
#include <stdlib.h>
/*7. Haga una agenda de contactos usando estructuras. Debe permitir el ingreso de información y la visualización en pantalla.*/
struct contacto{
    char nombre[30];
    char apellido[30];
    int telefono;
    char direccion[50];
    char email[50];
} agenda[5];

int main(){
    int agenda=0;
    printf("\n¿Cuantas agendas de contactos desea registrar? (Maximo 5): ");
    scanf("%d", &agenda);
    for(int i=0;i<agenda;i++) {
        printf("\nContacto %d\n", i + 1);
        printf("Ingrese el nombre: ");
        scanf(" %[^\n]", agenda[i].nombre);
        printf("Ingrese el apellido: ");
        scanf(" %[^\n]", agenda[i].apellido);
        printf("Ingrese el telefono: ");
        scanf("%d", &agenda[i].telefono);
        printf("Ingrese la direccion: ");
        scanf(" %[^\n]", agenda[i].direccion);
        printf("Ingrese el email: ");
        scanf(" %[^\n]", agenda[i].email);
    }

    printf("\n----AGENDA DE CONTACTOS -----\n");
    for(int i=0;i<5;i++){ // Muestra todos los contactos
        printf("\nContacto %d\n", i + 1);
        printf("Nombre: %s\n", agenda[i].nombre);
        printf("Apellido: %s\n", agenda[i].apellido);
        printf("Telefono: %d\n", agenda[i].telefono);
        printf("Direccion: %s\n", agenda[i].direccion);
        printf("Email: %s\n", agenda[i].email);
    }

    return 0;
}
