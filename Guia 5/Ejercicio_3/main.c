#include <stdio.h>
#include <stdlib.h>

/*3. Armar una estructura para ingresar datos de empleados de una empresa. Se pide que
ingrese 5 empleados. La estructura debe tener los siguientes miembros: Nombre, Apellido, Horas trabajadas,
Valor hora y Salario. Indique quién es el empleado que menos
salario percibe.*/

struct empleado{
    char nombre[50]; // Guardo la variable con su correspondiente tipo de dato
    char apellido[50]; // Guardo la variable con su correspondiente tipo de dato
    int horas_trabajadas; // Guardo la variable con su correspondiente tipo de dato
    float valor_hora; // Guardo la variable con su correspondiente tipo de dato
    float salario; // Guardo la variable con su correspondiente tipo de dato
} em[5];
int main(){
    float menor=0.00;
    int posicion_menor=0;
    for(int i=0; i<5; i++){
        printf("Complete el dato del empleados nro: %d!!", i+1);
        printf("\nIngrese su nombre: ");
        scanf(" %[^\n]", em[i].nombre);
        printf("\nIngrese su apellido: ");
        scanf(" %[^\n]", em[i].apellido);
        printf("\nIngrese la horas trabajadas: ");
        scanf("%d", &em[i].horas_trabajadas);
        printf("\nIngrese el valor por hora: $");
        scanf("%f", &em[i].valor_hora);
        printf("\nIngrese el salario: $");
        scanf("%f", &em[i].salario);
        if(i==0){ // Si estoy en la primera vuelta
            menor = em[i].salario; // Le determino que el valor sea el primer salario ingresado
        } else if(em[i].salario<menor){ // consulto en las siguientes vuelta si el salario a ingresar en menor a lo guardado en "menor"
            menor = em[i].salario; // Si lo es, actualizo el nuevo "menor"
            posicion_menor = i; // Guardo la posicion del menor
        }
    }
    for(int i=0;i<5;i++){
        printf("\nEmpleado %d:\n", i+1);
        printf("Nombre del Empleado: %s\n", em[i].nombre); // Informo al usuario
        printf("Apellido del Empleado: %s\n", em[i].apellido); // Informo al usuario
        printf("Horas trabajadas: %d\n", em[i].horas_trabajadas); // Informo al usuario
        printf("Valor hora: %.2f\n", em[i].valor_hora); // Informo al usuario
        printf("Salario: %.2f\n", em[i].salario); // Informo al usuario
    }
    printf("El que menor salario tiene es el empleado: %s %s", em[posicion_menor].nombre, em[posicion_menor].apellido); //Informo al usuario
    return 0;
}
