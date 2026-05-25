#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    /*6. Modificar el programa anterior para excluir a todos los números negativos junto con el
    cero. Es decir, la estructura de control inicial debe determinar si el número ingresado
    es 0 o es negativo. Si esto fuera cierto, entonces se debe terminar el programa. Caso
    contrario, indicar si el número es par o impar. Además, si fuera par, se pide que lo
    eleve al cuadrado con la función pow. Y si fuera impar, que lo eleve al cubo, también
    con la función pow. Mostrar todos los resultados en pantalla.
    Generar 100 num aleateorios entre 0 y 100 y mostrarlo en pantalla
    */
    printf("-----------------------------------");
    printf("\n-------BIENVENIDO AL PROGRAMA------");
    printf("\n-----------------------------------");
    srand(time(NULL));
    float resultado; // Inicializo el espacio a calcular la cuadratica y cubica
    int numero = rand() % 101; // 100 Numeros aleatorios
    if(numero==0 || numero<0){ // //condiciono que si aparece 0 o un numero negativo
        return 0; // Finalizamos el programa
    }else if(numero%2==0){
        printf("\nEl numero %d es PAR ", numero); //Informo que el numero es par
        resultado = pow(numero, 2); // Elevamos al cuadrado
        printf("\nEl numero %d es elevado al cuadrado es %.2f ", numero, resultado); // Mostramos el resultado de lo calculado
    }
    else{
        printf("\nEl numero %d es IMPAR ", numero); // Informa que el numero es impar
        resultado = pow(numero, 3); // Elevamos al cubo
        printf("\nEl numero %d es elevado al cubo es %.2f ", numero, resultado); // Mostramos el resultado de lo calculado
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");

    return 0;
}
