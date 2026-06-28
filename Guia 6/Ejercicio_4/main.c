#include <stdio.h>
#include <stdlib.h>
/*4. Hacer un programa que permita, mediante un menú de opciones, realizar cada una de
las acciones detalladas debajo. Considerar en todos los casos que las operaciones se
realizarán con 2 (dos) números del tipo entero sin signo. Considerar usar funciones y
la instrucción switch-case:
a) Suma.
b) Resta.
c) Multiplicación.
d) División.
e) Salir*/
int suma(int n1, int n2);
int resta(int n1, int n2);
int multiplicacion(int n1, int n2);
float division(int n1, int n2);

int main()
{
    int option, numero1, numero2, respuesta;
    float rta_division;

    do{
        printf("----------------------\n");
        printf("---Menu de opciones---\n");
        printf("----------------------\n");
        printf("\t 1) Suma\n");
        printf("\t 2) Resta\n");
        printf("\t 3) Multipllicacion\n");
        printf("\t 4) Division\n");
        printf("\t 5) Salir\n");

        printf("Seleccione la opcion que desee: ");
        scanf("%d", &option);

        if(option!=5){
            printf("Ingrese el primer numero: ");
            scanf("%d", &numero1);
            printf("Ingrese el segundo numero:");
            scanf("%d", &numero2);
        }
        switch(option){

            case 1: respuesta = suma(numero1, numero2);
                    printf("%d + %d = %d\n", numero1, numero2, respuesta);
                break;
            case 2: respuesta = resta(numero1, numero1);
                    printf("%d - %d = %d\n", numero1, numero2, respuesta);
                break;
            case 3: respuesta = multiplicacion(numero1, numero2);
                    printf("%d * %d = %d\n", numero1, numero2, respuesta);
                break;
            case 4: rta_division = division(numero1, numero2);
                    printf("%d / %d = %.2f\n", numero1, numero2, rta_division);
                break;
            case 5:
                printf("---Terminamos el programa---");
                break;
            default: printf("Opcion incorrecta. Revise las opciones");

        }
    }while(option!=5); //Que funcione mientras la opcion sea distinta a 5

    return 0;
}
int suma(int n1, int n2){
    return n1 + n2;
};

int resta(int n1, int n2){
    return n1 - n2;
};
int multiplicacion(int n1, int n2){
    return n1 * n2;
};
float division(int n1, int n2){
    return (float)n1 / n2;
};
