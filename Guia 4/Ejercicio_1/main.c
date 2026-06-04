#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Crear un programa que solicite el ingreso de N números. Los números deberán ser
almacenados en un vector. Los mismos deberán mostrarse por pantalla, pero al final
se deberán mostrar los siguientes resultados:
La sumatoria de los números.
El promedio de los números ingresados.
El menor de los números que se ingresó, y en qué posición del vector se encuentra.
*/
    int posiciones, valor, suma=0, menor, posicion; // Inicializo las variables a usar y en cero la variable en el que voy a almacenar la suma
    float promedio; // Inicializo el promedio
    printf("Ingrese un numero: "); // Espacio para que ingresen los numeros
    scanf("%d", &posiciones); // Lugar para guardar la posicion

    int numeros[posiciones]; // Inicializo la variable para la posicion
    for(int i=0; i<posiciones; i++){
        printf("Ingrese un valor para la posicion: "); // Espacio para que ingresen los numeros
        scanf("%d", &valor); // Lugar para guardar la posicion
        numeros[i] = valor; // Para cada posicion voy a guardar en cada posiicon el valor ingresado
        if(i==0 || numeros[i]<menor){ // Determino que la primera posicion ingreada sea cero y por eso la compáro en un princio con la variable vacia
            menor=numeros[i];  // Guardo en esa variable el primer numero comparado
            posicion=i; // Y la posicion actual que encontre como menor será la posicion
        }
        suma+=numeros[i]; // A medida que voy avanzando sumo los valores ingresados en la posicion
    }
    promedio= (float)suma / (float)posiciones; // Realizo el promedio con el float en cada uno
    printf("\nLa suma de los numeros es %d, \nEl promedio de los nuemeros es %.2f \nEl menor de los numeros ingresados es %d en la posicion %d", suma, promedio, menor, posicion);
    return 0;
}
// La matriz vacia se inicilaiza en cero ejemplo {0}
// Sirve para los problemas de la dispercion la "estructura"
