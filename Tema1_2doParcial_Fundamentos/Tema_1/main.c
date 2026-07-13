#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#define MAX_VISITANTES 10
#define MAX_PARQUES 2
#define MAX_ATRACCIONES 2

typedef struct{
    char nombre[40];
    int atender_x_hora;
    int edad_minima;
    float tiempo_espera_promedio; // en minutos
}Atraccion;
typedef struct{
    char nombre[30];
    float precio_base;
    Atraccion atracciones[2]; // Maximo 2 atracciones por parque
} Parque;
typedef struct{
    char nombre[50];
    char apellido[50];
    int edad;
    int cant_dias_permanencia;
    Parque parque_elegido; // Eligo 0 - magic kingdom, 1 - holliwood studios
}Visitante;

int cantidad_actual_visitantes=0;
Visitante visitantes[MAX_VISITANTES];

Parque parques[MAX_PARQUES]; // Para los datos de configuracion
void cargar_parques(Parque parques[]);
void registrar_visitante();
void calcular_precio();
void buscar_por_parque();
void actualizar_estadia();
void salir();
void Pausar();
void Limpiar_Pantalla();
// Funciones auxiliares
void mostrar_atracciones_parque(Parque parque);

void mostrar_datos_visitante(int posicion); // Para opcion 2 y4
float calcular_precioxedad(int edad, float precio_base); // Dado que se saca un porcentaje. Uso para opcion 2 y3

int buscar_visitante_x_apellido(char apellido[]); // Para opcion 4
int main()
{
    int option;
    cargar_parques(parques); // Cardo los datos fijos de los 2 parques al iniciar
    do{
        Limpiar_Pantalla();
        printf("-------------------------\n");
        printf("---Bienvenido a Sistema Disney world---\n");
        printf("Visitantes registrados: [%d] \n", cantidad_actual_visitantes);
        printf("1) Registrar nuevo vistante\n");
        printf("2) Calcular precio de entrada\n");
        printf("3) Buscar visitantes por parque\n");
        printf("4) Actualizar dias de estadia\n");
        printf("5) Salir \n");
        printf("-----------------------------\n");
        printf("Elija su opcion: ");
        scanf("%d", &option);
        switch(option){
            case 1: registrar_visitante();
                break;
            case 2: calcular_precio();
                break;
            case 3: buscar_por_parque();
                break;
            case 4: actualizar_estadia();
                break;
            case 5: salir();
                break;
            default:
                printf("Opcion Invalida. Intente nuevamente.");
        }
    }while(option!=5);
    return 0;
}
void Limpiar_Pantalla(){
    system("cls");
}
void Pausar(){
    printf("Pulse cualquier tecla para volver al menu principal...");
    getchar();
    getchar();
}
// --- Cargo datos de configuracion ---
void cargar_parques(Parque parques[]){
    strcpy(parques[0].nombre, "Magic Kingdom"); // Ingreso el 1er parque
    parques[0].precio_base = 109.00;

    strcpy(parques[0].atracciones[0].nombre, "Space Mountain");
    parques[0].atracciones[0].atender_x_hora = 1800;
    parques[0].atracciones[0].edad_minima = 7;
    parques[0].atracciones[0].tiempo_espera_promedio = 25;

    strcpy(parques[0].atracciones[1].nombre, "Pirates Caribbean");
    parques[0].atracciones[1].atender_x_hora = 2400;
    parques[0].atracciones[1].edad_minima = 0;
    parques[0].atracciones[1].tiempo_espera_promedio = 25;

    strcpy(parques[1].nombre, "Hollywood Studios"); // Ingreso el 2do parque
    parques[1].precio_base = 107.00;

    strcpy(parques[1].atracciones[0].nombre, "Rise Resistance");
    parques[1].atracciones[0].atender_x_hora = 600;
    parques[1].atracciones[0].edad_minima = 8;
    parques[1].atracciones[0].tiempo_espera_promedio = 120;

    strcpy(parques[1].atracciones[1].nombre, "Tower Terror");
    parques[1].atracciones[1].atender_x_hora = 1600;
    parques[1].atracciones[1].edad_minima = 10;
    parques[1].atracciones[1].tiempo_espera_promedio = 40;
}
//----opcion 1----
void registrar_visitante(){
    Limpiar_Pantalla();
    // Permitir el ingreso de hasta 10 visitantes
    if(cantidad_actual_visitantes >= MAX_VISITANTES){
        printf("ERROR:No se pueden registrar mas de 10 visitantes");
        Pausar();
        return;
    }
    // Los vistantes se cargan de a uno a la vez
    printf("---Registre a un nuevo visitante --- \n");
    printf("Ingrese su nombre: ");
    scanf(" %[^\n]", visitantes[cantidad_actual_visitantes].nombre);
    printf("Ingrese su apellido: ");
    scanf(" %[^\n]", visitantes[cantidad_actual_visitantes].apellido);
    printf("Ingrese su edad: ");
    scanf("%d", &visitantes[cantidad_actual_visitantes].edad);
    printf("Cantidad de dias de permanencia: ");
    scanf("%d", &visitantes[cantidad_actual_visitantes].cant_dias_permanencia);

    // Unicamente muestro los parques porque ya estan subidos
    printf("---Parques disponibles---\n");
    for(int i=0; i<MAX_PARQUES; i++){
        printf("%d) %s - Precio base: $%.2f\n", i, parques[i].nombre, parques[i].precio_base);
        mostrar_atracciones_parque(parques[i]); // Muestro las atracciones del parque**--
        printf("\n\n");
    }
    int parque_selecionado;
    printf("Seleccione el parque con ('0' o '1'): ");
    scanf("%d", &parque_selecionado);
    // Le asigno el parque al visitante, asignandole todo al parque elegido
    visitantes[cantidad_actual_visitantes].parque_elegido = parques[parque_selecionado];
    cantidad_actual_visitantes++; // Aumento cantidad de visitante

    printf("\n Visitante registrado exitosamente!\n"); // Informo al usuario -- **

    printf("Su parque seleccionado es: %s", visitantes[cantidad_actual_visitantes-1].parque_elegido.nombre);
    Pausar();
}
void mostrar_atracciones_parque(Parque parques){ // Muestro las atracciones **--
    printf("Atracciones: ");
    for(int i=0; i<MAX_ATRACCIONES;i++){
        printf(" - %s (edad min: %d, espera: %d min)\n",parques.atracciones[i].nombre, parques.atracciones[i].edad_minima, parques.atracciones[i].tiempo_espera_promedio);
    }
}
//----opcion 2----
void calcular_precio(){
    Limpiar_Pantalla();

    if(cantidad_actual_visitantes==0){
        printf("No hay visitantes registrados.");
        Pausar();
        return;
    }

    char apellido_visitante[50]; // Apellido a buscar con el MAximo_Apellido = 50
    printf("Ingrese el apellido del visitante: ");
    scanf("%[^\n]", &apellido_visitante);
    int encontre = -1;
    for(int i=0; i<cantidad_actual_visitantes;i++){
        if(strcmp(visitantes[i].apellido, apellido_visitante)==0){ // Si ambos coinciden
            encontre = i;
            break;
        }
    }
    if(encontre ==-1){
        printf("\nNo se encontro ningun visitante con ese apellido\n");
        Pausar();
        return;
    }
    mostrar_datos_visitante(encontre); // Posicion encontrada para mostra con un for
    //Calculo el precio con los datos del visitante
    float precio_base= visitantes[encontre].parque_elegido.precio_base;
    float precio_final= calcular_precioxedad(visitantes[encontre].edad, precio_base); //Calculo porcentaje
    printf("--El calculo del precio--\n");
    printf("El precio base del parque es: %.2f", precio_base);
    printf("Por categoria: ");
    if(visitantes[encontre].edad <3){
        printf("Los bebes pasan gratis.\n");
    } else if(visitantes[encontre].edad >=3 && visitantes[encontre].edad <=11){
        printf("Niño cuenta con un 20% de descuento");
    } else if(visitantes[encontre].edad>=12 && visitantes[encontre].edad<=64){
        printf("Adultos abonan precio base completo.\n");
    } else if(visitantes[encontre].edad>=65){
        printf("Senior abona con un 15% de descuento.\n");
    }
    printf("Precio final: $%.2f\n", precio_final);
    Pausar();
}
void mostrar_datos_visitante(int posicion){
    printf("--Datos visitante --\n");
    printf("Nombre: %s %s y edad: %d \n", visitantes[posicion].nombre, visitantes[posicion].apellido, visitantes[posicion].edad);
    printf("Dias de estadia: %d \n", visitantes[posicion].cant_dias_permanencia);
    printf("Parque elegido: %s con precio base: %.2f", visitantes[posicion].parque_elegido.nombre, visitantes[posicion].parque_elegido.precio_base);
}
float calcular_precioxedad(int edad, float precio_base){
    if(edad>=3 && edad<=11){
        return precio_base * 0.8;
    } else if(edad>=12 && edad<=64){
        return precio_base;
    }else if(edad>=65){
        return precio_base *0.85;
    }
}
//---Opcion 3---
void buscar_por_parque(){
    Limpiar_Pantalla();
    if(cantidad_actual_visitantes==0){
        printf("No hay visitantes registrados.");
        Pausar();
        return;
    }
    char nombre_parque[50];
    printf("Los parques disponibles son: %s, %s", parques[0].nombre, parques[1].nombre);
    printf("Ingrese el nombre del parque: ");
    scanf("%[^\n]", &nombre_parque);

    printf("Los visitantes en %s", nombre_parque);
    int visitantes_encontrados = 0;
    float ingresos_totales=0.00;

    for(int i=0; i<cantidad_actual_visitantes;i++){
        if(strcmp(visitantes[i].parque_elegido.nombre, nombre_parque)==0){ // Si el nombre del parque del cliente es igual al ingresado
            printf("Visitante: %s %s - Edad % anios - Estadia %d dias\n", visitantes[i].nombre, visitantes[i].apellido, visitantes[i].edad, visitantes[i].cant_dias_permanencia);
            //Calculo los precios por ese visitante
            float precio_visitante = calcular_precioxedad(visitantes[i].edad, visitantes[i].parque_elegido.precio_base);
            ingresos_totales +=precio_visitante;

            visitantes_encontrados++;
        }
    }

    if(visitantes_encontrados==0){
        printf("No hay visitantes registrados para este parque. \nPruebe verificando el nombre este bien escirto ");
    } else {
        printf("Resumen del parque: %s \n", nombre_parque);
        printf("Total visitantes: %d \n", visitantes_encontrados);
        printf("Ingresos totales: %.2f \n", ingresos_totales);
        printf("Promedio por visitante: %.2f \n", ingresos_totales/visitantes_encontrados);
    }
    Pausar();
}

//--Opcion 4---
void actualizar_estadia(){
    Limpiar_Pantalla();
    if(cantidad_actual_visitantes==0){
        printf("No hay visitantes registrados.");
        Pausar();
        return;
    }

    char apellido_visitante[50]; // Apellido a buscar con el MAximo_Apellido = 50
    printf("Ingrese el apellido del visitante: ");
    scanf("%[^\n]", &apellido_visitante);
    int encontre = buscar_visitante_x_apellido(apellido_visitante);

    if(encontre ==-1){
        printf("\nNo se encontro ningun visitante con ese apellido\n");
        Pausar();
        return;
    }
    printf("Sus datos actuales son: ");
    mostrar_datos_visitante(encontre);

    char respuesta;
    printf("\n¿Deseas actualizar los días de estadía? (s/n): ");
    scanf(" %c", &respuesta);
    if(respuesta=='s' || respuesta=='S'){
        int nuevos_dias;
        printf("Ingresa los nuevos días de estadía (1-14): ");
        scanf("%d", &nuevos_dias);
        while (nuevos_dias < 1 || nuevos_dias > 14) { // Para validar los dias
            printf("Dias invalidos. Ingresa entre 1 y 14: ");
            scanf("%d", &nuevos_dias);
        }
        int dias_anteriores = visitantes[encontre].cant_dias_permanencia;
        visitantes[encontre].cant_dias_permanencia = nuevos_dias;
        printf("Actualizamos los datos: \n");
        mostrar_datos_visitante(encontre);
        printf("\nCambio realizado: %d días → %d días\n", dias_anteriores, nuevos_dias);

        // Calcular diferencia de costo **---**
        float precio_diario = calcular_precioxedad(visitantes[encontre].edad, visitantes[encontre].parque_elegido.precio_base);
        float diferencia_costo = precio_diario* (nuevos_dias - dias_anteriores);
        if (diferencia_costo > 0) {
            printf("Costo adicional: $%.2f\n", diferencia_costo);
        } else if (diferencia_costo < 0) {
            printf("Reembolso: $%.2f\n", -diferencia_costo);
        } else {
            printf("Sin cambios en el costo\n");
        }

        printf("\n La estadia se actualizo exitosamente!\n");
    } else {
        printf("Se cancelo la operacion.\n"); // Informo operacion canceladad
    }
    Pausar();
 }
 int buscar_visitante_x_apellido(char apellido[]){
     for(int i=0; i<cantidad_actual_visitantes; i++){
        if(strcmp(visitantes[i].apellido, apellido)==0){
            return i;
        }
     }
     return -1; // Sino encuentra nada
 }
void salir(){
    Limpiar_Pantalla();
    printf("\nGracias por usar el sistema Disney world. Esperamos que vuelvas a este lugar mágico, Hasta Pronto!!");
}
