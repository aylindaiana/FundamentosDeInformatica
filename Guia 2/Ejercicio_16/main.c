#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*16. Defina tres variables de tipo entero mayores a 0. Cada variable almacena el tamaño
de cada lado de un triángulo. Hacer un programa que diga cuándo el triángulo es
equilátero (sus tres lados son iguales), cuándo isósceles (solo dos lados son iguales) y
cuándo ni lo uno ni lo otro (todos sus lados miden diferente).*/
    printf("---------------------------------------------");
    printf("\n------Identificamos los tipos de Triangulo------");
    printf("\n------(Los valores deben ser mayores a cero!)------");
    printf("\n-------------------------------------------");
    int lado1, lado2, lado3; // Inicializo el espacio para ingresar los tres numeros y auxiliares

    printf("\nIngrese el PRIMER lado del triangulo: "); // Pedimos que se ingrese un numero
    scanf("%d", &lado1); // Guardamo el numero en su espacio
    printf("\nIngrese el SEGUNDO lado del triangulo: "); // Pedimos que se ingrese un numero
    scanf("%d", &lado2); // Guardamo el numero en su espacio
    printf("\nIngrese el TERCER lado del triangulo: "); // Pedimos que se ingrese un numero
    scanf("%d", &lado3); // Guardamo el numero en su espacio


    if(lado_1 == lado_2 && lado_2 == lado_3){
        printf("\nEs un triangulo EQUILATERO"); // Informo que tipo de triangulo es
    } else if(lado_1 == lado_2 || lado_2 == lado_3 || lado_1 == lado_3){
        printf("\nEs un triangulo ISOSCELES"); // Informo que tipo de triangulo es
    } else{
        printf("\nEs un triangulo ESCALENO"); // Informo que tipo de triangulo es
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
