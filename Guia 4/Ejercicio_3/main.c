#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*3. Hacer un programa similar al anterior, pero con un vector de 6 posiciones.*/
    int numeros[5];

    for(int i=0; i<6;i++){
        printf("Ingrese un numero en la cifra %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    if(numeros[0]==numeros[5] && numeros[1]==numeros[4] && numeros[2]==numeros[3]){
        printf("Las sifras son capicuas!!");
    } else {
        printf("NO son capicuas");
    }
    return 0;
}

