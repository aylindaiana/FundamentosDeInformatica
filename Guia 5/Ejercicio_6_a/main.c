#include <stdio.h>
#include <stdlib.h>

/* Realizar ejercicios del libro Algoritmos y Estructuras de Datos: una Perspectiva en C,
   de Luis Joyanes Aguilar: a) Problema 4.2 (pág. 116).
   Escribir un programa de facturacion de clientes. Los cliente tienen un nombre, el numero
   de unidades solicitadas, el precio de cada unidad y el estado en que se encuentra. */
struct clientes{
    char nombre[30];
    int unidades_solicitadas;
    float precio_unidad;
    char estado[15]; // moroso, atrasado, pagado.
} cli[5]; // Como pide "diversos clientes" decido que sean 5
 int main()
{
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
