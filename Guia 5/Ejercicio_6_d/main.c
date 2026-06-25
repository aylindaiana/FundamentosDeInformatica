#include <stdio.h>
#include <stdlib.h>

/*    Modificar el programa anterior para obtener los siguientes informes o datos:

    * Listado de los mejores triplistas de cada equipo
    * Maximo goleador de la liga de futbol
    * Equipo ganador de la liga de futbol. Suponiendo que se consiguen tres puntos por partido ganado
      y un punto por partido empatado
    * Equipo ganador de la liga de baloncesto*/
struct equipo_baloncesto{
    char nombre[30];
    int victorias;
    int derrotas;
    int perdidas_balon;
    int rebotes;
    char mejor_triplista[30];
    int triples_anotados;
} baloncesto[5]; // Agrego un limite aleatorio de equipos

struct equipo_futbol{
    char nombre[30];
    int victorias;
    int derrotas;
    int empates;
    int goles_favor;
    int goles_contra;
    char goleador[30];
    int goles;
} futbol[5]; // Agrego un limite aleatorio de equipos

int main()
{
    int eleccion;
    int cant_baloncesto = 0, cant_futbol = 0; // Para determinar cantidad de quipos segun su categioria

    printf("Desea Ingresar un equipo de Futbol (1) o equipo de Baloncesto (2) \n");
    printf("--------Debe ingresar el numero '1' o '2' --------\n");
    scanf("%d", &eleccion);
    if(eleccion == 1){

        int max_goles = -1;   // Arranco en -1 para que el primero siempre sea mayor
        int pos_max_goleador = 0;

        int max_puntos = -1; // Arranco en -1 para que el primero siempre sea mayor
        int pos_campeon_futbol = 0;

        printf("\n>>> REGISTRO DE LIGA DE FUTBOL <<<\n");
        printf("\n¿Cuantos equipos de FUTBOL desea registrar? (Maximo 5): ");
        scanf("%d", &cant_futbol);

        for(int i = 0; i < cant_futbol; i++){
            printf("\nEquipo nro: %d\n", i+1);
            printf("Ingrese el nombre del equipo: ");
            scanf(" %[^\n]", futbol[i].nombre);
            printf("Numero de victorias: ");
            scanf("%d", &futbol[i].victorias);
            printf("Numero de derrotas: ");
            scanf("%d", &futbol[i].derrotas);
            printf("Ingrese numero de empates: ");
            scanf("%d", &futbol[i].empates);
            printf("Ingrese los goles a favor: ");
            scanf("%d", &futbol[i].goles_favor);
            printf("Ingrese los goles en contra: ");
            scanf("%d", &futbol[i].goles_contra);
            printf("Nombre del goleador: ");
            scanf(" %[^\n]", futbol[i].goleador);
            printf("Ingrese el numero de goles del goleador: ");
            scanf("%d", &futbol[i].goles);

            int puntos_equipo = (futbol[i].victorias * 3) + (futbol[i].empates * 1); // Calculo los puntos por equipo
            if(puntos_equipo > max_puntos){
                max_puntos = puntos_equipo; // Actualizamos el nuevo récord
                pos_campeon_futbol = i;  // Guardamos la posicion del equipo récord
            }
            if(futbol[i].goles > max_goles){ // Busco al maximo goleador actual
                max_goles = futbol[i].goles; // Actualizamos el nuevo récord de goles
                pos_max_goleador = i;        // Guardamos la posición
            }
        }

        printf("\n------- INFORMES DE FUTBOL --------\n");

        printf("Equipo ganador de la Liga: %s (Puntos: %d)\n", futbol[pos_campeon_futbol].nombre, max_puntos); // Muestro al ganador
        printf("Maximo goleador de la Liga: %s del equipo %s con %d goles\n", futbol[pos_max_goleador].goleador, futbol[pos_max_goleador].nombre, max_goles); // Muestro al goleador

    } else if (eleccion == 2){
        int max_victorias = -1;
        int pos_campeon_basket = 0;

        printf("\n>>> REGISTRO DE LIGA DE BALONCESTO <<<\n");
        printf("\n¿Cuantos equipos de BALONCESTO desea registrar? (Maximo 5): ");
        scanf("%d", &cant_baloncesto);

        for(int i = 0; i < cant_baloncesto; i++){
            printf("\nEquipo nro: %d\n", i+1);
            printf("Ingrese el nombre del equipo: ");
            scanf(" %[^\n]", baloncesto[i].nombre);
            printf("Numero de victorias: ");
            scanf("%d", &baloncesto[i].victorias);
            printf("Numero de derrotas: ");
            scanf("%d", &baloncesto[i].derrotas);
            printf("Ingrese las perdidas de balon: ");
            scanf("%d", &baloncesto[i].perdidas_balon);
            printf("Numero de rebotes: ");
            scanf("%d", &baloncesto[i].rebotes);
            printf("Nombre del mejor triplista: ");
            scanf(" %[^\n]", baloncesto[i].mejor_triplista);
            printf("Ingrese los triples anotados: ");
            scanf("%d", &baloncesto[i].triples_anotados);

            if(baloncesto[i].victorias > max_victorias){
                max_victorias = baloncesto[i].victorias;
                pos_campeon_basket = i;
            }
        }
        printf("\n----------INFORMES DE BALONCESTO ----------------\n");
        printf("Equipo ganador de la Liga: %s (Victorias: %d)\n", baloncesto[pos_campeon_basket].nombre, max_victorias);

        printf("\nListado de los mejores triplistas de cada equipo:\n");
        for(int i = 0; i < cant_baloncesto; i++){ // Muestro el listado el total de los mejores triplistas por equipo
            printf("%s Equipo: %s con %d triples\n", baloncesto[i].mejor_triplista, baloncesto[i].nombre, baloncesto[i].triples_anotados);
        }

    } else {
        printf("Opcion invalida.\n");
    }

    return 0;
}
