#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*2. Indicar si un número de 4 cifras ingresado por teclado es un número capicúa. Llenar
un vector de 4 posiciones con valores enteros para resolver el problema.*/

    int numeros[3];

    for(int i=0; i<3;i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }
    if(numeros[0]==numeros[3] && numeros[1]==numeros[2]){
        printf("Las sifras son capicuas!!");
    } else {
        printf("NO son capicuas");
    }
    return 0;
}
