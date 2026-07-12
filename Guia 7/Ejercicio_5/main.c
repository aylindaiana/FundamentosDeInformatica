#include <stdio.h>
#include <stdlib.h>
/*5. Promedio con paso por referencia
Haga un programa que permita ingresar 3 valores float por teclado. Haga una función
que pase por referencia dichos valores y que, al recibirlos, pueda calcular el promedio.
Muestre el resultado, tanto dentro de la función programada como dentro del main,
para verificar que los parámetros se pasan por referencia.*/
void Calcular_Promedio(float *n1, float *n2, float *n3, float *promedio);
int main()
{
    float num1, num2, num3, prom;
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1); // Ingreso primer valor
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2); // Ingreso segundo valor
    printf("Ingrese el tercer numero: ");
    scanf("%f", &num3); // Ingreso tercer valor

    Calcular_Promedio(&num1, &num2, &num3, &prom); // Llamo a la funcion psando las direcciones de memoria
    printf("\nPromedio desde el main: %.2f", prom); // Muestro promedio desde el main para comprobar que la funcion modifico la variable promedio
    return 0;
}

void Calcular_Promedio(float *n1, float *n2, float *n3, float *promedio){
    *promedio=(*n1+*n2+*n3)/3; // Calculo el promedio utilizando los valores apuntados
    printf("\nPromedio desde la funcion: %.2f", *promedio); // Muestro promedio desde la funcion
}
