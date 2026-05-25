#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*14. Dado un entero que representa un año, indique si corresponde a un año bisiesto o no.
Busque las condiciones que se deben cumplir para que un año sea bisiesto.*/
    printf("---------------------------------------------");
    printf("\n--------CALCULAMOS ANIO BISIESTO--------");
    printf("\n-------------------------------------------");
    int anio; // Inicializo el espacio para ingresar un numero

    printf("\nIngrese un anio para averiguar si es bisiesto: "); // Pedimos que se ingrese un numero
    scanf("%d", &anio); // Guardamo el numero en su espacio

    if(anio%4 == 0 && anio%100 != 0){
        printf("\nEl anio es bisiesto"); // Informo que efectivamente es bisiesto
    }else if(anio%400 == 0){
        printf("\nEl anio es bisiesto"); // Informo que efectivamente es bisiesto
    }else{
        printf("\nEl anio NO es bisiesto"); // Informo que efectivamente es bisiesto
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
