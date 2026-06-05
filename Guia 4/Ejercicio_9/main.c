#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*9. Hacer un programa que permita reconocer si una palabra de 5 caracteres es un palíndromo o no. Un palíndromo es una palabra que puede leerse de igual forma, de adelante
hacia atrás o de atrás hacia adelante. Ejemplo: RADAR es un palíndromo.
*/
    char palindromo[5];

    for(int i=0;i<5;i++){
        printf("Ingrese SOLO un caracter en la posicion %d: ", i+1);
        scanf(" %c", &palindromo[i]);
    }
    if(palindromo[0] == palindromo[4] && palindromo[1] == palindromo[3])
    {
        printf("\nLa palabra es un palindromo, Muy bien!");
    } else {
        printf("\nLa palabra NO es un palindromo");
    }
    return 0;
}
