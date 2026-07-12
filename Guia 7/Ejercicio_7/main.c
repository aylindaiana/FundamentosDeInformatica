#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PAQUETES 30 // Cantidad maxima de paquetes que se pueden almacenar
/*
7. Sistema de gestión de paquetes
Una empresa que se dedica a servicios de logística tiene la necesidad de tener un sistema
para gestionar los paquetes que son enviados por un empleado.
Los datos de un paquete son:
Remitente (nombre, apellido y DNI).
Destinatario (nombre, apellido y DNI).
Domicilio destino (el domicilio tiene calle, altura y CP de 4 dígitos).
Teléfono de contacto.
Marca de entrega (0 si no fue entregado, 1 si fue entregado).
Tipo de envío (puede ser 24hs, 48hs o normal).
Se pide hacer un programa donde, mediante un menú de opciones, se permita:
1. Agregar nuevo paquete // llama a la función Agregar_Paquete.
2. Reporte de paquetes por CP // llama a la función Reporte_x_cp.
3. Actualizar estado de entrega // llama a la función Actualizar_Estado_Entrega.
4. Listar paquetes pendientes de entrega // llama a la función Listar_Paquetes_Pendientes
5. Salir // llama a la función Salir. Borra la pantalla y termina el programa.
*/
typedef struct{
    char nombre[30];
    char apellido[30];
    int dni;
} Persona;
typedef struct{
    char calle[30];
    int altura;
    int cp;
} Domicilio;
typedef struct{
    Persona remitente; // Datos de la persona
    Persona destinatario; // Datos de la persona
    Domicilio destino; // Direccion donde debe entregarse
    char telefono[20];
    int entrega; // 0 = No entregado 1 = Entregado
    char tipo_envio[15]; // Puede ser "24hs", "48hs" o "normal"
} Paquete;
// Variables globales----
Paquete paquetes[MAX_PAQUETES];
int cantidad=0;

void Agregar_Paquete();
void Reporte_x_cp();
void Actualizar_Estado_Entrega();
void Listar_Paquetes_Pendientes();
void Salir();
void Limpiar_Pantalla();

int main()
{
    int option;
    do{
        printf("\n1- Agregar paquete");
        printf("\n2 - Reporta por cp");
        printf("\n3 - Actualizar entrega");
        printf("\n4 - Pendientes");
        printf("\n5 - Salir");
        printf("\n--Ingrese una respuesta en NUMERO--");
        printf("\nOpcion: ");
        scanf("%d", &option);
        switch(option){ // Segun la opcion elegida llama a la funcion correspondiente
            case 1: Agregar_Paquete();
                break;
            case 2: Reporte_x_cp();
                break;
            case 3: Actualizar_Estado_Entrega();
                break;
            case 4: Listar_Paquetes_Pendientes();
                break;
            case 5:  Salir();
                break;
            default:
                printf("Opcion Invalida. Intentelo nuevamente.\n");
        }
    }while(option!=5); // Mientras la opcion sea distinta al 5, debe seguir ejecutandose
    return 0;
}
void Limpiar_Pantalla(){
    system("Cls"); // Limpia todo lo anterios
}
void Agregar_Paquete(){
    char respuesta;
    int opcion_envio;
    do{
        if(cantidad>=MAX_PAQUETES){ // Para verificar que haya espacios para cargar paquetees
            Limpiar_Pantalla();
            printf("No se pueden cargar más paquetes. Alcanzo la capcidad máxima que son %d", MAX_PAQUETES);
            return;
        }
        Limpiar_Pantalla();
        printf("\n--- Datos del Remitente---\n");
        printf("Nombre: ");
        scanf(" %[^\n]", paquetes[cantidad].remitente.nombre);
        printf("Apellido: ");
        scanf(" %[^\n]", paquetes[cantidad].remitente.apellido);
        printf("DNI: ");
        scanf("%d", &paquetes[cantidad].remitente.dni);

        printf("\n--- Datos del Destinatario ---\n");
        printf("Nombre: ");
        scanf(" %[^\n]", paquetes[cantidad].destinatario.nombre);
        printf("Apellido: ");
        scanf(" %[^\n]", paquetes[cantidad].destinatario.apellido);
        printf("DNI: ");
        scanf("%d", &paquetes[cantidad].destinatario.dni);

        printf("\n--- Domicilio de destino ---\n");
        printf("Calle: ");
        scanf(" %[^\n]", paquetes[cantidad].destino.calle);
        printf("Altura: ");
        scanf("%d", &paquetes[cantidad].destino.altura);

        do{ // Validando que el cp ingresado tenga exactamente 4 digitos
            printf("CP (4 digitos): ");
            scanf("%d", &paquetes[cantidad].destino.cp);
            if (paquetes[cantidad].destino.cp < 1000 || paquetes[cantidad].destino.cp > 9999)
                printf("CP invalido, debe tener 4 digitos.\n");
        }while(paquetes[cantidad].destino.cp < 1000 || paquetes[cantidad].destino.cp > 9999);

        printf("\nTelefono de contacto: ");
        scanf(" %[^\n]", paquetes[cantidad].telefono);

        printf("\nTipo de envio:\n");
        printf("1 - 24hs\n2 - 48hs\n3 - normal\n");
        do{ // Para validar que el usuario ingrese una opcion valida
            printf("Opcion: ");
            scanf("%d", &opcion_envio);
        }while(opcion_envio < 1 || opcion_envio > 3);

        switch (opcion_envio) { // Para guardar el tipo de envio segun la opcion elegida
            case 1: strcpy(paquetes[cantidad].tipo_envio, "24hs");
                break;
            case 2: strcpy(paquetes[cantidad].tipo_envio, "48hs");
                break;
            case 3: strcpy(paquetes[cantidad].tipo_envio, "normal");
                break;
        }
        paquetes[cantidad].entrega = 0; // Todo paquete nuevo comienza como no entregado

        cantidad++; // Incremento la cantidad de paquetes almacenados

        printf("\nPaquete cargado con exito.\n");
        printf("Desea agregar otro paquete? (S/N): ");
        scanf(" %c", &respuesta);

    }while((respuesta=='S' || respuesta =='s') && cantidad <MAX_PAQUETES);
}

void Reporte_x_cp() {
    char continuar = 'S';
    int cp_Buscado, encontrados, i;
    Limpiar_Pantalla();

    while (continuar == 'S' || continuar == 's'){
        encontrados = 0;
        printf("Ingrese el CP a buscar: ");
        scanf("%d", &cp_Buscado);

        for (i=0;i<cantidad;i++){ // Recorro todos los paquetes buscando coincidencias con el CP ingresado
            if (paquetes[i].destino.cp == cp_Buscado) {
                printf("\nRemitente: %s\n", paquetes[i].remitente.apellido);
                printf("Destinatario: %s\n", paquetes[i].destinatario.apellido);
                printf("Domicilio: %s %d, CP %d\n",
                       paquetes[i].destino.calle,
                       paquetes[i].destino.altura,
                       paquetes[i].destino.cp);
                printf("Tipo de envio: %s\n\n", paquetes[i].tipo_envio);
                encontrados++; // Voy acumulando la cantidad de paquetes encontrados
            }
        }
        if(encontrados==0){
            printf("No fue encontrado ningun paquete con CP %d.\n\n", cp_Buscado);
        }else{
            printf("Cantidad de paquetes en CP %d: %d\n\n", cp_Buscado, encontrados);
        }

        printf("Desea ingresar otro CP? (S/N): ");
        scanf(" %c", &continuar);
    }
}

void Actualizar_Estado_Entrega() {
    char calle_Buscar[30];
    int altura_Buscar, idx, i;
    char respuesta;

    Limpiar_Pantalla();

    printf("Ingrese la direccion a buscar: ");
    scanf(" %[^\n]", calle_Buscar);
    printf("Ingrese la altura a buscar: ");
    scanf("%d", &altura_Buscar);

    idx= -1; // Indico inicialmente que no se encontro un paquete
    for(i=0;i<cantidad;i++) { // Busco el paquete por calle y altura
        if (strcmp(paquetes[i].destino.calle, calle_Buscar) == 0 &&
            paquetes[i].destino.altura == altura_Buscar) {
            idx = i;
            break; // Al encontrar el paquete salgo del ciclo que recorre
        }
    }
    if(idx == -1){
        printf("\nNo se encuentra ningun paquete en esa direccion.\n");
        return;
    }

    do{
        printf("\nPaquete de %s para %s. Direccion %s %d. Paquete %s.\n",
               paquetes[idx].remitente.apellido,
               paquetes[idx].destinatario.apellido,
               paquetes[idx].destino.calle,
               paquetes[idx].destino.altura,
               paquetes[idx].entrega == 1 ? "entregado" : "no entregado");

        printf("Desea actualizarlo? (S/N): ");
        scanf(" %c", &respuesta);

        if (respuesta == 'S' || respuesta == 's') {
            paquetes[idx].entrega = (paquetes[idx].entrega == 1) ? 0 : 1; // Cambio el estado: si era 1 pasa a 0 y si era 0 pasa a 1
        }

    }while (respuesta == 'S' || respuesta == 's');
}

void Listar_Paquetes_Pendientes() {
    int i, c24 = 0, c48 = 0, cNormal = 0;

    Limpiar_Pantalla();

    for(i=0;i<cantidad;i++){ // Recorro todos los paquetes
        if(paquetes[i].entrega == 0){ // Muestro solo los que NO fueron entregados
            printf("Paquete de %s %s (DNI %d) para %s %s (DNI %d).\n",
                   paquetes[i].remitente.nombre, paquetes[i].remitente.apellido, paquetes[i].remitente.dni,
                   paquetes[i].destinatario.nombre, paquetes[i].destinatario.apellido, paquetes[i].destinatario.dni);
            printf("Direccion %s %d, CP %d. Tel %s. Envio %s.\n\n",
                   paquetes[i].destino.calle, paquetes[i].destino.altura, paquetes[i].destino.cp,
                   paquetes[i].telefono, paquetes[i].tipo_envio);
            // Cuento la cantidad de envios pendientes segun su tipó
            if(strcmp(paquetes[i].tipo_envio, "24hs") == 0){
                c24++;
            }else if(strcmp(paquetes[i].tipo_envio, "48hs") == 0){
                c48++;
            }else{
                cNormal++;
            }
        }
    }
    printf("-------------------------------------\n");
    printf("Total envios de 24hs: %d\n", c24); // Muestro resumen de paquetes pendientes
    printf("Total envios de 48hs: %d\n", c48); // Muestro resumen de paquetes pendientes
    printf("Total envios normales: %d\n", cNormal); // Muestro resumen de paquetes pendientes
    printf("-------------------------------------\n");
}
void Salir(){
    Limpiar_Pantalla();
    printf("Gracias por usar el Sistema de Gestion de Paquetes!!!\n");
}

