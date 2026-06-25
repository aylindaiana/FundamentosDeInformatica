#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    /* Realizar ejercicios del libro Algoritmos y Estructuras de Datos: una Perspectiva en C,
de Luis Joyanes Aguilar:
a) Problema 4.2 (pág. 116).*/
/*    Escribir un programa de facturacion de clientes. Los cliente tienen un nombre, el numero de unidades solicitadas,
    el precio de cada unidad y el estado en que se encuentra: moroso, atrasado, pagado.
    El programa debe generar a los diversos clientes.*/
struct clientes{
    char nombre[50];
    int unidades_solicitadas;
    float precio_unidad;
    char estado[50]; // moroso, atrasado, pagado.
} cli[5]; // Como pide "diversos clientes" decido que sean 5
 int main()
{
    float limite;
    for(int i=0;i<5;i++){
        printf("Cliente %d\n", i + 1); // Sumamos +1 para que el usuario vea el numero actual
        printf("Nombre: "); // Solicito el dato al usuario
        scanf(" %[^\n]", cli[i].nombre); // Lo guardo con espacio %n porque limpia el buffer de posibles 'Enters' anteriores.
        printf("Unidades solicitadas: "); // Solicito el dato al usuario
        scanf("%d", &cli[i].unidades_solicitadas); // Guardo lo ingresado
        printf("Precio por unidad: "); // Solicito el dato al usuario
        scanf("%f", &cli[i].precio_unidad);// Guardo lo ingresado
        printf("Estado (moroso/atrasado/pagado): "); // Solicito el dato al usuario
        scanf(" %[^\n]", cli[i].estado); // Lo guardo con espacio %n porque limpia el buffer de posibles 'Enters' anteriores
    }
    printf("Los morosos son: \n");
    for(int i=0;i<5;i++){
        if(strcmp(cli[i].estado,"moroso")==0){ // Si el estado coincide en ser moroso (me ayudo con el string que compara
            printf("%s\n", cli[i].nombre); // Muestro los nombres de los morosos
        }
    }
    printf("Ingrese el importe minimo para filtrar:: ");
    scanf("%f", &limite);
    for(int i=0;i<5;i++){
        float factura = cli[i].unidades_solicitadas * cli[i].precio_unidad;
        if(strcmp(cli[i].estado,"pagado")==0 && factura>limite){ // Si pago y la factura supera el importe minimo a abonar
            printf("\n%s tiene una factura pagada de $%.2f", cli[i].nombre, factura); // Le inforomo al usuario nombre del cliente junto conel monto de su factura
        }
    }
    for(int i=0;i<5;i++){
        float importe_total = cli[i].unidades_solicitadas * cli[i].precio_unidad; // Calculo el importe del cliente actual (Unidad * Precio)

        printf("\nCliente: %s", cli[i].nombre); // Muestro la informacion
        printf("\nUnidades: %d", cli[i].unidades_solicitadas); // Muestro la informacion
        printf("\nPrecio unitario: %.2f", cli[i].precio_unidad); // Muestro la informacion
        printf("\nEstado: %s", cli[i].estado); // Muestro la informacion
        printf("\nImporte total: %.2f\n", importe_total); // Muestro la informacion
    }
    return 0;
}
