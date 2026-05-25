#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*12. Modifique el programa del TP No 1 de conversión de grados F a C para indicar lo
siguiente relacionado a la temperatura que puede tener el agua:
Si la temperatura es inferior a −89,5
◦C, el programa debe indicar que se ha
introducido un valor inferior a la menor temperatura registrada en la superficie
de la Tierra.
Si la temperatura es inferior a 0
◦C, el programa debe indicar que el agua se
encuentra en estado sólido.
Si la temperatura está entre 0
◦C y 100◦C, el programa debe indicar que el agua
se encuentra en estado líquido.
Si la temperatura es superior a 100◦C, el programa debe indicar que el agua se
encuentra en estado gaseoso.
Si la temperatura es superior a 121◦C, el programa debe indicar que se ha superado
la mayor temperatura conocida que soporta vida.*/
    printf("---------------------------------------------");
    printf("\n------ Conversión de grados F a C ------");
    printf("\n-------------------------------------------");
    float grados_centigrados, grados_fahrenheit; // Inicializo el espacio para ingresar un numero

    printf("Ingrese los grados fahrenheit: "); // Pedimos que se ingrese un numero
    scanf("%f", &grados_fahrenheit); // Guardamo el numero en su espacio

    grados_centigrados = (grados_fahrenheit - 32.0) * (5.0/9.0); // Calculamos

    if(grados_centigrados < -89.5){
        printf("\nSe ha introducido un valor inferior a la menor temperatura registrada en la superficie de la Tierra."); // Informo mensaje de lños grados centigrados
        printf("\n---Intentalo nuevamente---");
        return 0; // Finalizamos el programa
    }
    if(grados_centigrados <= 0){
        printf("\nEl agua a esta temperatura se encuentra en estado solido"); // Informo mensaje de lños grados centigrados
    } else if(grados_centigrados > 0 && grados_centigrados <= 100){
        printf("\nEl agua a esta temperatura se encuentra en estado liquido."); // Informo mensaje de lños grados centigrados
    } else{
        printf("\nEl agua a esta temperatura se encuentra en estado gaseoso."); // Informo mensaje de lños grados centigrados
    }
    if(grados_centigrados > 121){
        printf("\nSe ha superado la mayor temperatura conocida que soporta vida."); // Informo mensaje de lños grados centigrados
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
