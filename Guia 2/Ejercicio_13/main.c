#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*13. Hacer un programa que calcule el índice de masa corporal de una persona:
    IMC =peso [kg] / (altura [m] × altura [m]) e indique el estado en el que se encuentra esa persona en función del valor de IMC:
    Índice de Masa
Corporal (IMC)
Clasificación
Menor a 18 Peso bajo. Necesario valorar signos de
desnutrición.
18 a 24.9 Normal.
25 a 26.9 Sobrepeso.
Mayor a 27 Obesidad.
27 a 29.9 Obesidad grado I. Riesgo relativo alto para
desarrollar enfermedades cardiovasculares.
30 a 39.9 Obesidad grado II. Riesgo relativo muy alto
para el desarrollo de enfermedades
cardiovasculares.
Mayor a 40 Obesidad grado III extrema o mórbida. Riesgo
relativo extremadamente alto para el
desarrollo de enfermedades cardiovasculares*/
    printf("---------------------------------------------");
    printf("\n------ Calculemos Masa Corporal ------");
    printf("\n-------------------------------------------");
    float peso, altura, imc; // Inicializo el espacio para ingresar un numero

    printf("\nIngrese el valor de su peso: "); // Pedimos que se ingrese un numero
    scanf("%f", &peso); // Guardamo el numero en su espacio
    printf("\nIngrese el valor de su Altura: "); // Pedimos que se ingrese un numero
    scanf("%f", &altura); // Guardamo el numero en su espacio

    imc = peso / (altura * altura); // Calculamos

    if(imc < 18){
        printf("\nPeso bajo. Necesario valorar signos de desnutrición"); // Informo el peso segun el IMC
    } else if(imc >= 18 & imc < 25){
        printf("\nSu peso %.2f es NORMAL", imc); // Informo el peso segun el IMC
    } else if(imc >= 25 && imc < 27){
        printf("\nSu peso %.2f es SOBREPESO", imc); // Informo el peso segun el IMC
    } else{
        printf("\nSu peso %.2f es OBESIDAD", imc); // Informo el peso segun el IMC
        // Dado que vamos a poner los grados de obesidad determino dentro los niveles de OBESIDAD
        if(imc >= 27 && imc < 30){
            printf("\nObesidad grado I. Riesgo relativo alto para desarrollar enfermedades cardiovasculares."); // Informo el peso segun el IMC
        } else if(imc >= 30 && imc < 40){
            printf("\nObesidad grado II. Riesgo relativo muy alto para el desarrollo de enfermedades cardiovasculares."); // Informo el peso segun el IMC
        } else{
            printf("\nObesidad grado III Extrema o Morbida. Riesgo relativo extremadamente alto para el desarrollo de enfermedades cardiovasculares"); // Informo el peso segun el IMC
        }
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
