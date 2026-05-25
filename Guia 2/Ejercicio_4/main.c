#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Hacer un programa que permita ingresar una letra (en mayúsculas o en minúsculas) y
    ///determine si es una vocal o consonante.

    char letra; //ingreso un enumero entero
    printf("---------------------------------------------------");
    printf("\nIngrese una letra: "); //Le solicito al usuario que ingrese un numero
    scanf("%c", &letra); // Lo guardo
    printf("\n--------------------------------------------------");
    if(letra=='a'||letra=='A'){ //Abro la condicional y consulto si es mayor
        printf("\nLa letra ingrasada %c es una vocal", letra); //Informo que es vocal
    }else if(letra=='e'|| letra=='E'){
        printf("\nLa letra ingrasada %c es una vocal", letra); // Informo que es vocal
    }else if(letra=='i'|| letra=='I'){
        printf("\nLa letra ingrasada %c es una vocal", letra); // Informo que es vocal
    }else if(letra=='o'|| letra=='O'){
        printf("\nLa letra ingrasada %c es una vocal", letra); // Informo que es vocal
    }else if(letra=='u'|| letra=='U'){
        printf("\nLa letra ingrasada %c es una vocal", letra); // Informo que es vocal
    }
    else{
        printf("\nLa letra ingresada %c es una CONSONANTE", letra); // Informa que su numero es menor a 100
    }
    printf("\n-------------------------------------------------");
    printf("\n --FIN--");
    return 0;
}
