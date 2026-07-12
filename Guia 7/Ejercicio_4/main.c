#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*4. Función con paso por referencia
Haga un programa que, dentro de la función main(), permita ingresar dos valores tipo
entero. Llame a las variables: A y B.
Sume dichos valores y guarde el resultado en una variable llamada Resultado.
Llame a una función (func_producto). Pase por referencia el valor almacenado en
resultado. La función debe calcular el cuadrado de dicho valor, por lo que se pide que
imprima desde el main, nuevamente la variable resultado, para notar que ahora se
imprime resultado al cuadrado.*/
void multiplicacion(int *resultado); // Paso por valor el resultado de la funcion
int main()
{
    int A, B, rta;
    printf("Ingrese A: ");
    scanf("%d", &A);
    printf("Ingrese B: ");
    scanf("%d", &B);
    rta=A+B; // Realizo la suma de ambos valores
    printf("La suma es: %d\n", rta);
    multiplicacion(&rta); // Paso por referencia

    printf("Resultado del cuadrado es: %d\n", rta);
    return 0;
}
void multiplicacion(int *resultado){
    *resultado = pow(*resultado,2); // Uso funcion en la funcion pow para obtener el producto
}
