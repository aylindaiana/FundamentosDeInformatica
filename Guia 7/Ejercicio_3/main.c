#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Vector de 30 elementos con punteros
Dado un vector de 30 elementos enteros y aleatorios entre 0 y 500, se pide escribir un
programa que, utilizando punteros y aritmética de punteros, permita:
a) Imprimir todo el vector en pantalla.
b) Imprimir la primera dirección de memoria del vector y la última. Mostrarla en
pantalla usando 2 punteros diferentes (puntero-inicial y puntero-final).
c) Mostrar el contenido (dato) de la primera y última posición de memoria utilizando
indirección de punteros.
d) Crear un puntero (puntero-central) que permita mostrar la dirección de memoria
y el dato que posee la posición 15 del vector.
e) Graficar cómo quedó la memoria de la computadora, considerando todas las direcciones utilizadas por el vector y todas las
direcciones utilizadas por los punteros.
Utilice Excel, o haga el gráfico manual, para responder a la pregunta*/
int main()
{
    srand(time(NULL));
    int vector[30];
    int *p1=NULL;
    int *pinicial = NULL;
    int *pfinal = NULL;
    int *pcentral = NULL;
    for(int i=0; i<30; i++){
        p1=vector+i;
        *p1= rand()%501; // Cargo el vector con numeros aleatorios
    }
    pinicial=vector; // Asigno los punteros
    pfinal= vector+29; // Porqie tomo el ultimo vector por ende seria en num 30
    pcentral=vector+15; // El centro seria la mitad de 30

    printf("Vector: \n");
    for(int i=0; i<30;i++){
        p1=vector+i;
        printf("%d ", *p1); // a( visualizamos el vecotr
    }
    printf("\nPrimera direccion: %p", pinicial); // Muestro direccion de memoria
    printf("\nUltima direccion: %p", pfinal); // Muestro direccion de memoria
    printf("\nPrimera dato: %d", *pinicial); // Muestro unicamente los datos
    printf("\nUltimo dato: %d", *pfinal); // Muestro unicamente los datos
    printf("\nDireccion en posicion 15: %p", pcentral); // Para posicio 15
    printf("\nDatos en posicion 15: %d", *pcentral); // Solo dato para posicion 15
    return 0;
}
