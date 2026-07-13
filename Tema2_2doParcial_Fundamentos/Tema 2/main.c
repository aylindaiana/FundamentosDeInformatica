#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VISITANTES 12
#define MAX_PARQUES 2
#define MAX_ATRACCIONES 2

typedef struct{
    char nombre[35];
    int atender_x_hora;
    int edad_minima;
    float tiempo_espera_promedio; // en minutos
} Atraccion;

typedef struct{
    char nombre[35];
    float precio_base;
    Atraccion atracciones[2]; // Maximo 2 atracciones por parque
} Parque;

typedef struct{
    int documento;              // documento de identidad del visitante
    int edad;
    int dias_estadia;
    Parque parque_elegido;      // se guarda el parque completo, igual que en tu version anterior
} Visitante;

int cantidad_actual_visitantes = 0;
Visitante visitantes[MAX_VISITANTES];

Parque parques[MAX_PARQUES]; // Para los datos de configuracion

void cargar_parques(Parque parques[]);
void ingresar_visitante();
void calcular_costo();
void buscar_documento();
void modificar_dias();
void salir();
void Pausar();
void Limpiar_Pantalla();

// Funciones auxiliares
void mostrar_atracciones_parque(Parque parque);
void mostrar_datos_visitante(int posicion);
float calcular_costoxedad(int edad, float precio_base); // Uso para opcion 2 y 3
int buscar_visitante_x_documento(int documento);         // Para opcion 3 y 4

int main()
{
    int option;
    cargar_parques(parques); // Cargo los datos fijos de los 2 parques al iniciar

    do{
        Limpiar_Pantalla();
        printf("-------------------------\n");
        printf("---Bienvenido a Sistema Disney world---\n");
        printf("Visitantes registrados: [%d] \n", cantidad_actual_visitantes);
        printf("1) Ingresar nuevo visitante\n");
        printf("2) Calcular costo de entrada\n");
        printf("3) Buscar visitante por documento\n");
        printf("4) Modificar dias de estadia\n");
        printf("5) Salir \n");
        printf("-----------------------------\n");
        printf("Elija su opcion: ");
        scanf("%d", &option);
        switch(option){
            case 1: ingresar_visitante();
                break;
            case 2: calcular_costo();
                break;
            case 3: buscar_documento();
                break;
            case 4: modificar_dias();
                break;
            case 5: salir();
                break;
            default:
                printf("Opcion Invalida. Intente nuevamente.");
                Pausar();
        }
    }while(option != 5);
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
    parques[0].atracciones[0].tiempo_espera_promedio = 45;

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
void ingresar_visitante(){
    Limpiar_Pantalla();
    // Permitir el ingreso de hasta 12 visitantes
    if(cantidad_actual_visitantes >= MAX_VISITANTES){
        printf("ERROR: No se pueden registrar mas de 12 visitantes");
        Pausar();
        return;
    }
    // Los visitantes se cargan de a uno a la vez
    printf("---Registre a un nuevo visitante --- \n");
    printf("Ingrese su documento: ");
    scanf("%d", &visitantes[cantidad_actual_visitantes].documento);
    printf("Ingrese su edad: ");
    scanf("%d", &visitantes[cantidad_actual_visitantes].edad);
    printf("Cantidad de dias de permanencia: ");
    scanf("%d", &visitantes[cantidad_actual_visitantes].dias_estadia);

    // Unicamente muestro los parques porque ya estan subidos
    printf("---Parques disponibles---\n");
    for(int i = 0; i < MAX_PARQUES; i++){
        printf("%d) %s - Precio base: $%.2f\n", i, parques[i].nombre, parques[i].precio_base);
        mostrar_atracciones_parque(parques[i]); // Muestro las atracciones del parque
        printf("\n\n");
    }
    int parque_seleccionado;
    printf("Seleccione el parque con ('0' o '1'): ");
    scanf("%d", &parque_seleccionado);
    // Le asigno el parque al visitante, copiando todos sus datos
    visitantes[cantidad_actual_visitantes].parque_elegido = parques[parque_seleccionado];
    cantidad_actual_visitantes++; // Aumento cantidad de visitantes

    printf("\n Visitante registrado exitosamente!\n");
    printf("Su parque seleccionado es: %s", visitantes[cantidad_actual_visitantes - 1].parque_elegido.nombre);
    Pausar();
}

void mostrar_atracciones_parque(Parque parque){
    printf("Atracciones: \n");
    for(int i = 0; i < MAX_ATRACCIONES; i++){
        printf(" - %s (edad min: %d, espera: %.0f min)\n",
               parque.atracciones[i].nombre,
               parque.atracciones[i].edad_minima,
               parque.atracciones[i].tiempo_espera_promedio);
    }
}

//----opcion 2----
void calcular_costo(){
    Limpiar_Pantalla();

    if(cantidad_actual_visitantes == 0){
        printf("No hay visitantes registrados.");
        Pausar();
        return;
    }

    int documento_buscado;
    printf("Ingrese el documento del visitante: ");
    scanf("%d", &documento_buscado);

    int encontre = buscar_visitante_x_documento(documento_buscado);

    if(encontre == -1){
        printf("\nNo se encontro ningun visitante con ese documento\n");
        Pausar();
        return;
    }

    mostrar_datos_visitante(encontre); // Muestro datos del visitante encontrado

    // Calculo el costo con los datos del visitante
    float precio_base = visitantes[encontre].parque_elegido.precio_base;
    float precio_final = calcular_costoxedad(visitantes[encontre].edad, precio_base);

    printf("\n--El calculo del costo--\n");
    printf("El precio base del parque es: $%.2f\n", precio_base);
    printf("Por categoria: ");

    // Reglas de Pricing Disney Global
    if(visitantes[encontre].edad < 4){
        printf("Los menores de 4 anios pasan gratis.\n"); // No definido en la consigna, se asume gratis
    } else if(visitantes[encontre].edad >= 4 && visitantes[encontre].edad <= 12){
        printf("Nino: cuenta con un 25%% de descuento.\n");
    } else if(visitantes[encontre].edad >= 13 && visitantes[encontre].edad <= 17){
        printf("Adolescente: cuenta con un 10%% de descuento.\n");
    } else if(visitantes[encontre].edad >= 18 && visitantes[encontre].edad <= 64){
        printf("Adulto: abona precio base completo.\n");
    } else if(visitantes[encontre].edad >= 65){
        printf("Senior: abona con un 20%% de descuento.\n");
    }

    printf("Costo final: $%.2f\n", precio_final);
    Pausar();
}

void mostrar_datos_visitante(int posicion){
    printf("--Datos visitante --\n");
    printf("Documento: %d - Edad: %d anios\n", visitantes[posicion].documento, visitantes[posicion].edad);
    printf("Dias de estadia: %d \n", visitantes[posicion].dias_estadia);
    printf("Parque elegido: %s - Precio base: $%.2f\n",
           visitantes[posicion].parque_elegido.nombre,
           visitantes[posicion].parque_elegido.precio_base);
}

float calcular_costoxedad(int edad, float precio_base){
    if(edad < 4){
        return 0; // menor de 4 anios: sin definicion en la consigna, se asume gratis
    } else if(edad >= 4 && edad <= 12){
        return precio_base * 0.75f;
    } else if(edad >= 13 && edad <= 17){
        return precio_base * 0.90f;
    } else if(edad >= 18 && edad <= 64){
        return precio_base;
    } else { // 65+
        return precio_base * 0.80f;
    }
}

//---Opcion 3---
void buscar_documento(){
    Limpiar_Pantalla();

    if(cantidad_actual_visitantes == 0){
        printf("No hay visitantes registrados.");
        Pausar();
        return;
    }

    int documento_buscado;
    printf("Ingrese el numero de documento: ");
    scanf("%d", &documento_buscado);

    int encontre = buscar_visitante_x_documento(documento_buscado);

    if(encontre == -1){
        printf("\nNo se encontro ningun visitante con ese documento.\n");
        Pausar();
        return;
    }

    // Muestro todos los datos del visitante
    mostrar_datos_visitante(encontre);

    // Muestro la informacion completa del parque elegido, incluyendo atracciones
    printf("\n--Informacion del parque elegido--\n");
    mostrar_atracciones_parque(visitantes[encontre].parque_elegido);

    Pausar();
}

//--Opcion 4---
void modificar_dias(){
    Limpiar_Pantalla();

    if(cantidad_actual_visitantes == 0){
        printf("No hay visitantes registrados.");
        Pausar();
        return;
    }

    int documento_buscado;
    printf("Ingrese el documento del visitante: ");
    scanf("%d", &documento_buscado);

    int encontre = buscar_visitante_x_documento(documento_buscado);

    if(encontre == -1){
        printf("\nNo se encontro ningun visitante con ese documento\n");
        Pausar();
        return;
    }

    printf("Sus datos actuales son: \n");
    mostrar_datos_visitante(encontre);

    char respuesta;
    printf("\n¿Deseas modificar los dias de estadia? (s/n): ");
    scanf(" %c", &respuesta);

    if(respuesta == 's' || respuesta == 'S'){
        int nuevos_dias;
        printf("Ingresa los nuevos dias de estadia (1-21): ");
        scanf("%d", &nuevos_dias);
        while(nuevos_dias < 1 || nuevos_dias > 21){ // Para validar los dias
            printf("Dias invalidos. Ingresa entre 1 y 21: ");
            scanf("%d", &nuevos_dias);
        }

        int dias_anteriores = visitantes[encontre].dias_estadia;
        visitantes[encontre].dias_estadia = nuevos_dias;

        printf("Actualizamos los datos: \n");
        mostrar_datos_visitante(encontre);
        printf("\nCambio realizado: %d dias -> %d dias\n", dias_anteriores, nuevos_dias);

        printf("\n La estadia se actualizo exitosamente!\n");
    } else {
        printf("Se cancelo la operacion.\n");
    }
    Pausar();
}

int buscar_visitante_x_documento(int documento){
    for(int i = 0; i < cantidad_actual_visitantes; i++){
        if(visitantes[i].documento == documento){
            return i;
        }
    }
    return -1; // Sino encuentra nada
}

void salir(){
    Limpiar_Pantalla();
    printf("\nGracias por usar el sistema Disney world. Esperamos que vuelvas a este lugar magico, Hasta Pronto!!");
}
