#include <stdio.h>
#include <stdlib.h>
/*Se quiere informatizar los resultados obtenidos por los equipos de baloncesto y de futbol
    de la localidad alcarreña Lupiana. La informacion de cada equipo es:

    * Nombre del equipo
    * Numero de victorias
    * Numero de derrotas

    Para los equipos de baloncesto añadir la informacion:

    * Numero de perdidas de balon
    * Numero de rebotes cogidos
    * Nombre del mejor anotador de triples
    * Numero de triples del mejor triplista

    Para los equipos de futbol añadir la informacion:
    * Numero de empates
    * Numerod de goles a favor
    * Numero de goles en contra
    * nombre del goleador del equipo
    * Numero de goles del goleador

    Escribir un programa que introduzca la informacion para todos los equipos
    integrantes de ambas ligas.*/
struct equipo_baloncesto{
    // Datos en comun
    char nombre[30];
    int victorias;
    int derrotas;
    // Datos de baloncesto
    int perdidas_balon;
    int rebotes;
    char mejor_triplista[30];
    int triples_anotados;
} baloncesto[5];

struct equipo_futbol{
    // Datos en comun
    char nombre[30];
    int victorias;
    int derrotas;
    // Datos de futbol
    int empates;
    int goles_favor;
    int goles_contra;
    char goleador[30];
    int goles;
} futbol[5];

int main()
{
    int eleccion, cant_baloncesto=0; cant_futbol=0;
    printf("Desea Ingresar un equipo de Futbol (1) o equipo de Baloncesto (2) \n");// Consulto al usuraio
    printf("--------Debe ingresar el numero '1' o '2' --------\n");
    scanf("%d", &eleccion);  // Leo la eleccion del usuario

    if(eleccion == 1){ // Si el usuario elige FUTBOL
        printf("\n>>> REGISTRO DE LIGA DE FUTBOL <<<\n");
        printf("\n¿Cuantos equipos de FUTBOL desea registrar? (Maximo 5): ");
        scanf("%d", &cant_futbol);
        for(int i = 0; i < cant_futbol; i++){
            printf("\nEquipo nro: %d\n", i+1);
            printf("Ingrese el nombre del equipo: ");
            scanf(" %[^\n]", futbol[i].nombre); // De esta manera limpia el buffer
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
            scanf(" %[^\n]", futbol[i].goleador); // De esta manera limpia el buffer
            printf("Ingrese el numero de goles: ");
            scanf("%d", &futbol[i].goles);
        }

    } else if (eleccion == 2){ // Si el usuario elige BALONCESTO
        printf("\n>>> REGISTRO DE LIGA DE BALONCESTO <<<\n");
        printf("\n¿Cuantos equipos de BALONCESTO desea registrar? (Maximo 5): ");
        scanf("%d", &cant_baloncesto);
        for(int i = 0; i < cant_baloncesto; i++){
            printf("\nEquipo nro: %d\n", i+1);
            printf("Ingrese el nombre del equipo: ");
            scanf(" %[^\n]", baloncesto[i].nombre); // De esta manera limpia el buffer
            printf("Numero de victorias: ");
            scanf("%d", &baloncesto[i].victorias);
            printf("Numero de derrotas: ");
            scanf("%d", &baloncesto[i].derrotas);

            printf("Ingrese las perdidas de balon: ");
            scanf("%d", &baloncesto[i].perdidas_balon);
            printf("Numero de rebotes: ");
            scanf("%d", &baloncesto[i].rebotes);
            printf("Nombre del mejor triplista: ");
            scanf(" %[^\n]", baloncesto[i].mejor_triplista); // De esta manera limpia el buffer
            printf("Ingrese los triples anotados: ");
            scanf("%d", &baloncesto[i].triples_anotados);
        }
    } else {
        printf("Opcion invalida.\n");
    }

    return 0;
}
