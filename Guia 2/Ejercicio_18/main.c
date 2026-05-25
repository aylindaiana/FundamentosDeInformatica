#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*18. Una empresa que se dedica al alquiler de autos tiene tarifas fijas que no cambian salvo
excepciones. El monto fijo se aplica solo a los primeros 400 kilómetros recorridos con el
auto. El importe de dicha tarifa fija es de $10.000. Si el auto recorre más de 400 km, se
aplica un valor de $100 por cada 30 km recorridos. Si el auto recorre 2000 kilómetros,
la tarifa inicial sigue siendo fija, el valor por cada kilómetro (a partir de los 400) sigue
vigente, pero se adiciona un valor de $250 en concepto de impuesto. Se pide hacer un
programa que permita calcular la tarifa que debe pagar el inquilino del auto, en función
de los km que recorrió.
*/
    printf("---------------------------------------------");
    printf("\n------ Calculemos las Tarifas ------");
    printf("\n-------------------------------------------");
    float km_recorridos, monto_a_pagar; // Inicializo el espacio para ingresar los numeros
    int diferencia; // Inicializo el espacio para ingresar los numeros
    const int tarifa_fija = 10000; // Uso variables FIJAS
    const int impuesto = 250; // Uso variables FIJAS

    printf("\nIngrese los kilometros que recorrio: "); // Pedimos que se ingrese un numero
    scanf("%f", &km_recorridos); // Guardamo el numero en su espacio

    if(km_recorridos >= 2000){
        diferencia = (km_recorridos - 400) / 30; // Realizamos el calculo
        monto_a_pagar = tarifa_fija + diferencia * 100.0 + impuesto;
        printf("\nLa tarifa a pagar es de $%.2f", monto_a_pagar); // Informamos la tarifa
    } else if(km_recorridos > 400){
        diferencia = (km_recorridos - 400) / 30; // Realizamos el calculo
        monto_a_pagar = tarifa_fija + diferencia * 100.0;
        printf("\nLa tarifa a pagar es de $%.2f", monto_a_pagar); // Informamos la tarifa
    } else{
        printf("\nLa tarifa a pagar es de $%.2f", tarifa_fija); // Informamos la tarifa
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
