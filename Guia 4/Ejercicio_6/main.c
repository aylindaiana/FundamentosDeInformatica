#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*6. Hacer un programa que rellene de forma aleatoria un vector de 10 posiciones con
números del 0 al 20; después se tendrán 3 intentos para adivinar un número. Cuando
se adivine un número, se indicarán las posiciones en las que se encuentra.*/
    int adivinanzas[10];
    int intentos=0, intento_usuario, adivino=0, gano = 0;

    srand(time(NULL));
    for(int i=0; i<10;i++){
        adivinanzas[i]= rand()%21;
    }
    for(int i=0; i<10;i++){
        printf("[%d]", adivinanzas[i]); // Dejo para guiarme y ver todos lo ejemplos
    }
    printf("\nBienvenido a las adivinanzas, tendra 3 intentos para adivinar");
    while(intentos<3){
        printf("\nIntento nro %d. Ingrese un numero del 1 al 20: ", intentos+1); // Solicito al usuario que ingrese un numero del 0 al 20 informando el numero de intentos con "+1" dado que empieza desde el 0
        scanf("%d", &intento_usuario);

        for(int i =0;i<10;i++){
            if(adivinanzas[i]== intento_usuario){
                printf("\n Encontraste el numero en la posicion [%d]", i);
                adivino=1;// uSO MI BANDERA PARA informar que gano
                gano =1;
            }
            if(adivino==1){ // Si adivina el numero
                printf("\n Felicidades adivinaste");
                adivino=0;
            }
        }
        intentos++;
    }
    if(intentos==3 && gano!=1){
        printf("\n Mejor suerte la proxima!!");
    } else{
        printf("\n Lo hiciste muy bien!!");
    }
    return 0;
}
