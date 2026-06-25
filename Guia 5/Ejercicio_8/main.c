#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*8. Modifique el programa anterior para que se pueda utilizar un menú de opciones. El
programa debe permitir: ingresar datos de contactos, mostrar todos los contactos y
mostrar solo amigos que viven en una zona determinada (ej.: Retiro).
*/
struct contacto {
    char nombre[30];
    char apellido[30];
    int telefono;
    char direccion[50];
    char zona[50];
    char email[50];
} agenda[5]; // Declar agenda para 5 contactos

int main(){

    int opcion;
    int cant_contactos = 0; // totalidad de contactos a ingresar

    printf("\n¿Cuantos contactos desea registrar? (Maximo 5): "); // Pido cantidad de contactos
    scanf("%d", &cant_contactos);
    do {
        printf("\n--- MENU DE OPCIONES ---");
        printf("\n1- Ingresar contactos");
        printf("\n2- Mostrar contactos");
        printf("\n3- Buscar por zona");
        printf("\n4- Salir");
        printf("\nOpcion: ");
        scanf("%d", &opcion); // Leemos la opción que ingreso el usuario
        switch(opcion){
            case 1:
                for(int i = 0; i < cant_contactos; i++) { // Pido los datos de la cantidad de contactos elegida
                    printf("\nContacto %d\n", i + 1);
                    printf("Ingrese el nombre: ");
                    scanf(" %[^\n]", agenda[i].nombre); // Guardo lo ingresado limpiando el buffer y espacios
                    printf("Ingrese el apellido: ");
                    scanf(" %[^\n]", agenda[i].apellido);
                    printf("Ingrese el telefono: ");
                    scanf("%d", &agenda[i].telefono); // Guardo lo ingresado limpiando el buffer y espacios
                    printf("Ingrese la direccion: ");
                    scanf(" %[^\n]", agenda[i].direccion);
                    printf("Ingrese la zona: ");
                    scanf(" %[^\n]", agenda[i].zona);
                    printf("Ingrese el email: ");
                    scanf(" %[^\n]", agenda[i].email);
                }
                break;
            case 2:
                printf("\n---- AGENDA DE CONTACTOS -----\n");
                for(int i = 0; i < cant_contactos; i++){
                    printf("\nContacto %d\n", i + 1);
                    printf("Nombre: %s\n", agenda[i].nombre);
                    printf("Apellido: %s\n", agenda[i].apellido);
                    printf("Telefono: %d\n", agenda[i].telefono);
                    printf("Direccion: %s\n", agenda[i].direccion);
                    printf("Zona: %s\n", agenda[i].zona);
                    printf("Email: %s\n", agenda[i].email);
                }
                break;
            case 3:
                char buscar_zona[50];
                printf("\nIngrese la zona a buscar: ");
                scanf(" %[^\n]", buscar_zona);
                printf("\nAmigos en la zona de %s:\n", buscar_zona);
                for(int i = 0; i < cant_contactos; i++){ // Paso por todos los contactos
                    if(strcmp(agenda[i].zona, buscar_zona) == 0){ // Si la zona es identica a la que estoy buscando
                        printf("%s %s\n", agenda[i].nombre, agenda[i].apellido);
                    }
                }
                break;
            case 4:
                printf("\nCerramos agenda\n");
                break;
            default:
                printf("\nOpcion invalida, por favor ingrese una de las opcion valida\n");
                break;
        }

    } while(opcion != 4); // Que el bucle ande mientras la opcion sea distinta de cero

    return 0;
}

