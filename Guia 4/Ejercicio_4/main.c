#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*4. Hacer un programa que rellene en forma automática un vector de 5000 posiciones. El
vector deberá tener números aleatorios entre 0 y 30. Se pide que el programa indique
cuántas veces aparece el número 10, cuántas veces aparece el 20 y cuántas veces aparece
el 30.*/
    int posiciones[4999];
    int suma_10=0, suma_20=0, suma_30=0;
    srand(time(NULL));
    for(int i=0; i<5000; i++){
        posiciones[i]= rand() %31;
        if(posiciones[i]==10){
            suma_10++;
        } else if(posiciones[i]==20){
            suma_20++;
        } else if(posiciones[i]==30){
            suma_30++;
        }
    printf("\nAparecen el numero 10 %d veces", suma_10);
    printf("\nAparecen el numero 20 %d veces", suma_20);
    printf("\nAparecen el numero 30 %d veces", suma_30);
    }
    return 0;
}
// Para que sirve vectores? Para almacenar de manera eficiente a la memoria.
// en c solo se puede crear vectores para un solo tipo dato
// Que es un vectos? un conjunto FINITO y ORDENADO de elementos del MISMO TIPO
/*    int numeros[10];
    int i;
    for(i=0; i<10; i++){
        printf("Ingrese el valor para la posicion %d del vector: ", i);
        scanf("%d", &numeros[i]);
    }
    printf("\n El vector ya se cargo con los numeros ingresados. Ahora imprimo-");
    for(i=0; i<10; i++){
        printf("\nEn la posicion (indice) %d tengo este valor %d", i, numeros[i]);
    }*/

/*   Podemos llevar una hoja con los string_functions ej: para comparar cadenas, concatenar
    funciones para guardar (como scanf) que es para imprimir una cadena que se usa gets() luego fflush() limpia el buffer (el fflush va antes del gets)

*/
