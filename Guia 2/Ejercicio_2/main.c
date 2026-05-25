#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    ///Repetir el ejercicio anterior, pero esta vez el número no se debe ingresar por teclado,
    ///sino que debe ser un aleatorio entre 0 y 999. (Ver función srand).
    printf("---------------------------------\n");
    srand(time(NULL)); // Sirve para asegurar que cambia a cada segundo
    int numero = rand() % 1000; // devuelve nros randoms entre el 0 y el 999 inclusive
    printf("-----------> ");
    if(numero>100){ //Abro la condicional y consulto si es mayor
        printf("Su numero es mayor a 100!"); //Informo el caso satisfactorio
        //printf("el num es %d", numero); Para probar si anda el random
    }else if(numero ==100){
        printf(" Su numero es igual al 100"); // Informo que el numero es igual a 100
    }
    else{
        printf(" Lo siento, su numero es menor a 100"); // Informa que su numero es menor a 100
        //printf("el num es %d", numero); Para probar si anda el random
    }
    printf("\n--------------------------------");
    printf("\n --FIN--");
    return 0;
}
