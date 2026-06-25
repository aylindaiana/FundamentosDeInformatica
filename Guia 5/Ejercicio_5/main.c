#include <stdio.h>
#include <stdlib.h>

/*5. Se desean ingresar por teclado ciertos datos de 4 estudiantes de la universidad: Nombre,
Apellido, Legajo, Materia[5], Nota[5]. Imprimir en pantalla las materias de cada alumno
y las notas correspondientes. Indicar quién tiene mejor promedio. */
struct estudiante{
    char nombre[30]; // Almaceno el dato del estudiante
    char apellido[30]; // Almaceno el dato del estudiante
    int legajo; // Almaceno el dato del estudiante
    char materia[5][30];  // Almaceno el dato del estudiante para 5 materias y poner el nombre de la misma
    int nota[5]; // Almaceno el dato del estudiante
} est[4]; // Vector para almacenar 4 estudiantes
int main()
{
    int posicion_mayor=0; // Guardo la posicion con mejor promedio
    float mayor_promedio=0.00;  // Guardo el mejor promedio para luego comparar
    for(int i=0; i<4; i++){
        printf("Ingrese al estudiante nro: %d", i+1); // Indico al estudiante cargando
        printf("Ingrese el Nombre: ");

        printf("Ingrese el Apellido: ");
        scanf(" %[^\n]", est[i].apellido);
        printf("Ingrese el Legajo: ");
        scanf("%d", &est[i].legajo);
        int suma=0;  // Inicializo para cada estudiante la suma en cero
        float promedio=0.00; // Igual para el promedio, incializo
        for(int j=0; j<5;j++){
            printf("Ingrese la materia nro: %d", i+1);
            scanf(" %[^\n]",est[i].materia[j]);
            printf("Ingrese la nota: ");
            scanf("%d", &est[i].nota[j]);

            suma+= est[i].nota[j]; // Voy acumulando todas las notas cargadas
        }
        promedio = suma / 5.0;
        if(i==0){
            mayor_promedio = promedio; // Almaceno el promedio inicial
            posicion_mayor = i; // Y su primer posicion
        } else if(promedio>mayor_promedio){  // Si el promedio actual es mayor
            mayor_promedio = promedio;
            posicion_mayor = i; // Guardo la posicion del mayor promedio
        }
    }
    for(int i=0; i<4; i++){
        printf("Alumno: %s %s \n", est[i].nombre, est[i].apellido); // Muestro nombre y apellido del estudiante
        for(int j=0; j<5;j++){
            printf("Materia: %s con Nota %d ", est[i].materia[j], est[i].nota[j]); // Muestro las materias del estudiante
        }
    }
    printf("El mejor promedio es de %s %s", est[posicion_mayor].nombre, est[posicion_mayor].apellido); // Muestro al estudiante con mayor promedio
    return 0;
}
