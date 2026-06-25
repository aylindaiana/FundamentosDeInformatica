#include <stdio.h>
#include <stdlib.h>

    /*4. Se desea ingresar información sobre libros para destacar aquellos que tienen más puntaje por el público. Para eso,
se pide que haga un programa que permita almacenar información sobre los títulos de los libros (título, autor,
género, precio, puntuación). Los datos serán ingresados por teclado, y luego deberá mostrar en pantalla todos los
títulos (tienen que ingresarse datos de 3 libros). Por último, destaque aquel que tiene mayor puntuación del público
(el favorito), indicando en pantalla el mensaje: “El favorito de todos es: . . . ”. */
struct titulos_libros{
    char titulo[30];
    char autor[30];
    char genero[30];
    float precio;
    int puntuacion;
} lib[3] ;
int main()
{
    int mayor=0, posicion_mayor=0;
    for(int i=0; i<3;i++){
        printf("Libro numero: %d", i+1);
        printf("Ingrese el titulo: ");
        scanf(" %[^\n]", lib[i].titulo);
        printf("Ingrese el Autor: ");
        scanf(" %[^\n]", lib[i].autor);
        printf("Ingrese el Genero: ");
        scanf(" %[^\n]", lib[i].genero);
        printf("Ingrese el Precio: ");
        scanf("%f", &lib[i].precio);
        printf("Ingrese el Puntuacion: ");
        scanf("%d", &lib[i].puntuacion);
        if(i ==0){ // Si estoy en la primera vuelta
            mayor=lib[i].puntuacion; // Le determino que la puntuacion sea el primer valor ingresado
        } else if(lib[i].puntuacion>mayor){ // Consulto en las siguientes vuelta si la puntuacio a ingresar en mayor a lo guardado
            mayor = lib[i].puntuacion; // Si lo es, actualizo el nuevo "mayor"
            posicion_mayor=i;
        }
    }
    for(int i=0; i<3;i++){
        printf("\nLibro %d:\n", i+1);
        printf("Titulo: %s\n", lib[i].titulo); // Informo al usuario
        printf("Autor: %s\n", lib[i].autor); // Informo al usuario
        printf("Genero: %s\n", lib[i].genero); // Informo al usuario
        printf("Precio: %.2f\n", lib[i].precio); // Informo al usuario
        printf("Puntuacion: %d\n", lib[i].puntuacion); // Informo al usuario
    }
    printf("El favorito de todos es el libro: %s del autor %s", lib[posicion_mayor].titulo, lib[posicion_mayor].autor); //Informo al usuario
    return 0;
}
