#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Haga un programa que solicite el ingreso de un número por teclado e indique si es
    ///mayor a 100.
    int numero; //ingrso un enumero entero
    printf("----------->");
    printf("Ingrese un numero: "); //Le solicito al usuario que ingrese un numero
    scanf("%d", &numero); // Lo guardo
    printf("----------->");
    if(numero>100){ //Abro la condicional y consulto si es mayor
        printf("Su numero es mayor a 100!"); //Informo el caso satisfactorio
    }else if(numero ==100){
        printf(" Su numero es igual al 100"); // Informo que el numero es igual a 100
    }
    else{
        printf(" Lo siento, su numero es menor a 100"); // Informa que su numero es menor a 100
    }
    printf("\n---------------------------");
    printf("\n --FIN--");
    return 0;
}
