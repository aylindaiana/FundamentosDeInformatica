#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*20. En una tienda comercial efectúan un descuento a los clientes dependiendo del monto
de la compra. El descuento se efectúa siguiendo el siguiente criterio:
Si el monto es menor que 500, no hay descuento.
Si el monto está comprendido entre 500 y 1000 inclusive, el descuento es de 5 %.
Si el monto está comprendido entre 1000 y 7000 inclusive, el descuento es del
11 %.
Si el monto está comprendido entre 7000 y 15000 inclusive, el descuento es del
18 %.
Si el monto es mayor de 15000, el descuento es del 25 %.*/
    printf("---------------------------------------------");
    printf("\n---Calculamos el sueldo con su incremento---");
    printf("\n-------------------------------------------");
    float compra, total_con_descuento; // Inicializo el espacio para ingresar los numeros

    printf("\nIngrese el monto de su compra para averiguar si aplica algun descuento: "); // Pedimos que se ingrese un numero
    scanf("%f", &compra); // Guardamo el numero en su espacio

    if(compra < 500){
        printf("\nNo aplica descuento. Su total a pagar es de $%.2f", compra); // Informamos que no aplica el descuento
    } else if(compra <= 1000){
        total_con_descuento = compra - (compra * 0.05); // Realizamos el calculo
        printf("\nPor su compra mayor a $500 recibe un descuento del 5%%. Su total a pagar es de $%.2f", total_con_descuento); // Informamos que aplica su descuento
    } else if(compra <= 7000){
        total_con_descuento = compra - (compra * 0.11); // Realizamos el calculo
        printf("\nPor su compra mayor a $1000 recibe un descuento del 11%%. Su total a pagar es de $%.2f", total_con_descuento); // Informamos que aplica su descuento
    } else if(compra <= 15000){
        total_con_descuento = compra - (compra * 0.18); // Realizamos el calculo
        printf("\nPor su compra mayor a $7000 recibe un descuento del 18%%. Su total a pagar es de $%.2f", total_con_descuento); // Informamos que aplica su descuento
    } else{
        total_con_descuento = compra - (compra * 0.25); // Realizamos el calculo
        printf("\nPor su compra mayor a $15000 recibe un descuento del 25%%. Su total a pagar es de $%.2f", total_con_descuento); // Informamos que aplica su descuento
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
