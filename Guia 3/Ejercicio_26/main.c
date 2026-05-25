#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*26. Escribir un programa que permita:
1º) Ingresar por teclado dos números (datos enteros).
2º) Mostrar por pantalla el mensaje: La suma es <suma>.
3º) Preguntar al usuario si desea realizar otra suma o no.
4º) Repetir los pasos 1º), 2º) y 3º), mientras que el usuario no responda ’n’ de (no).
5º) Mostrar por pantalla la suma total de los números introducidos.*/
    int numero1, numero2, suma_total=0;
    char n='a';
    printf("\nIngrese un primer numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero1); // Guardamo el numero en su espacio
    printf("\nIngrese un segundo numero: "); // Pedimos que se ingrese un numero
    scanf("%d", &numero2); // Guardamo el numero en su espacio
    while(n != 'n'){
        int suma=0;
        suma+=numero1+ numero2;
        suma_total+=suma;
        printf("La suma es <%d>", suma);
        printf("\nDesea realizar otra suma?"); // Pedimos que se ingrese un numero
        printf("\nEn caso de que *Si* intrduzca ¨s¨");
        printf("En caso de que *no* ingrese ¨n¨: "); // Pedimos que se ingrese un numero
        scanf(" %c", &n); // Debo dejar un espacio para leer el ENTER!!!! espacio%c
        if(n == 'n'){
            break;
        }
        printf("\nIngrese un primer numero: "); // Pedimos que se ingrese un numero
        scanf("%d", &numero1); // Guardamo el numero en su espacio
        printf("\nIngrese un segundo numero: "); // Pedimos que se ingrese un numero
        scanf("%d", &numero2); // Guardamo el numero en su espacio
    }
    printf("\nLa suma total es: %d ", suma_total); // Pedimos que se ingrese un numero

    return 0;
}
