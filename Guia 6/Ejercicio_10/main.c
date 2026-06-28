#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*10. Hacer un programa que permita realizar las siguientes acciones (con funciones), vinculadas al menú de opciones que deberá implementarse con switch:
1) Cargar vector.
2) Poner vector en 0.
3) Visualizar vector.
4) Promedio.
5) Salir.
Cuando el usuario presione la opción 1, deberá cargarse en forma aleatoria un vector
de 20 posiciones. Si ocurre que el usuario no empieza el programa por la opción 1, el
programa deberá indicar algún mensaje, por ejemplo: “Sr. Usuario, usted no ha cargado
el vector aún”. Luego de presionar una tecla, deberá volver al menú principal (atención:
podría implementar una función “chequeo” para verificar este punto).
Si presiona la opción 2, el programa deberá poner todo el vector en 0.
Si presiona la opción 3, deberá visualizar el vector, esté como esté.
Si presiona la opción 4, el programa deberá imprimir el vector y mostrar el promedio.*/
void cargar(int v[]); //LLamo a la funcion realizada abajo
void poner_cero(int v[]); //LLamo a la funcion realizada abajo
void mostrar(int v[]); //LLamo a la funcion realizada abajo
float promedio(int v[]); //LLamo a la funcion realizada abajo
int main()
{
    srand(time(NULL));
    int vect[20];
    int option, cargado=0;
    do{
        printf("------MENU DE VECTORES-----\n");
        printf("\t 1) Cargar Vector\n");
        printf("\t 2) Poner vector en 0\n");
        printf("\t 3) Visualizar vector\n");
        printf("\t 4) Promedio\n");
        printf("\t 5) Salir\n");
        printf("--------------------------------------------\n");
        printf("Ingrese la opcion que desee(En numero): ");
        scanf("%d", &option);
        switch(option){
            case 1: cargar(vect);
                    cargado = 1;
                break;
            case 2:
                    if(cargado==0){ // Consulto si el usuario previo al punto realizo la carga de datos del vector
                        printf("Sr. Usuario, usted no ha cargado el vector aun.");
                    } else{
                        poner_cero(vect);
                    }
                break;
            case 3: if(cargado==0){ // Consulto si el usuario previo al punto realizo la carga de datos del vector
                        printf("Sr. Usuario, usted no ha cargado el vector aun.");
                    } else {
                        mostrar(vect);
                    }
                break;
            case 4: if(cargado==0){ // Consulto si el usuario previo al punto realizo la carga de datos del vector
                        printf("Sr. Usuario, usted no ha cargado el vector aun.");
                    }else {
                        mostrar(vect); // Imprimo primero el vector
                        float prom= promedio(vect);
                        printf("Su promedio es: %.2f", prom); // Luego muestro el rpomedio
                    }
                break;
            case 5: printf("-----Terminando el programa-----");
                break;
            default: printf("Opcion incorrecta. Ingrese una opcion valida\n");
        }
    }while(option !=5);
    return 0;
}
void cargar(int v[]){
    for(int i=0; i<20;i++){
        v[i] = rand() % 101; // Se cargaran en el vector numeros aleatorios del 0 al 100
    }
};
void poner_cero(int v[]){
    for(int i=0;i<20;i++){
        v[i]=0; // Por cada posicion que recorra lo asigno el cero
    }
};
void mostrar(int v[]){
    for(int i=0;i<20;i++){
        printf("%d\n", v[i]); // Muestro el vector
    }
};
float promedio(int v[]){
    int suma=0;
    for(int i=0; i<20;i++){
        suma+=v[i]; // Sumo cada valor del vector
    }
    return suma/20.0; // Y luego calculo el promedio con la totalidad del vector que es 20
};
