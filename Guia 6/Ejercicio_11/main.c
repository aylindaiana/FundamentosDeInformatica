#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Hacer un programa para verificar si gané el Quini 6. El programa deberá, en primer
lugar, permitir al usuario almacenar 6 números más 2 como Jackpot. Estos últimos dos
números podrán ser valores entre 0 y 9. Una vez que estos valores estén almacenados,
el programa deberá generar en forma aleatoria 6 números entre 0 y 41 y 2 valores entre
0 y 9 para el Jackpot.
2
El programa deberá imprimir todo en pantalla y comparar los números aleatorios versus
los que jugué, además de decirme si gané algo o no. Las condiciones del juego son:
GANO EL POZO: si acerté todo.
NO GANO NADA: si no acerté ninguno.
GANO 1000: si acerté solo los 2 Jackpot.
GANO 10000: si acerté 4 números (que no son del Jackpot).
GANO 100000: si acerté 5.
GANO 1000000: si acerté 6.
Caso contrario, indicar qué acerté.*/
void cargar(int v[], int n, int max);
void generar(int v[], int n, int max);
void mostrar(int v[], int n);
int contar_aciertos(int a[], int b[], int n);
int main()
{
    srand(time(NULL));
    int jugador[6];
    int jackpot_jugador[2];
    int quini[6];
    int jackpot_quini[2];
    int aciertos = 0, aciertos_jackpot = 0;
    printf("----- CARGA DE NUMEROS DEL JUGADOR -----\n");
    cargar(jugador, 6, 41);

    printf("\nIngrese los 2 numeros del Jackpot (0 a 9)\n");
    cargar(jackpot_jugador, 2, 9);

    generar(quini, 6, 41); // Genera los 6 numeros sorteados teniendo en cuenta su maximo
    generar(jackpot_quini, 2, 9);
    printf("\nNumeros jugados: ");
    mostrar(jugador, 6);
    printf("\nJackpot jugado: ");
    mostrar(jackpot_jugador, 2);
    printf("\nNumeros sorteados: ");
    mostrar(quini, 6);
    printf("\nJackpot sorteado: ");
    mostrar(jackpot_quini, 2);

    aciertos = contar_aciertos(jugador, quini, 6); // Cuento los aciertos normales
    aciertos_jackpot = contar_aciertos(jackpot_jugador, jackpot_quini, 2);

    printf("\n\nAciertos: %d", aciertos);
    printf("\nAciertos Jackpot: %d\n", aciertos_jackpot);
    if(aciertos == 6 && aciertos_jackpot == 2){
        printf("\nGANO EL POZO");
    } else if(aciertos == 0 && aciertos_jackpot == 0){
        printf("\nNO GANO NADA");
    } else if(aciertos == 0 && aciertos_jackpot == 2){
        printf("\nGANO 1000");
    } else if(aciertos == 4){
        printf("\nGANO 10000");
    } else if(aciertos == 5){
        printf("\nGANO 100000");
    } else if(aciertos == 6){
        printf("\nGANO 1000000");
    } else{
        printf("\nAcerto %d numeros y %d Jackpot", aciertos, aciertos_jackpot);
    }
    return 0;
}
void cargar(int v[], int n, int max){
    for(int i=0; i<n; i++){
        do{ printf("Ingrese numero %d (0 a %d): ", i+1, max); // Solicito un numero válido
            scanf("%d", &v[i]);
        }while(v[i]<0 || v[i]>max); // Mientras este dentro del rango le solicitare al usuario que cargue un numero
    }
};
void generar(int v[], int n, int max){
    for(int i=0; i<n;i++){
        v[i] = rand() % (max + 1); // Genero un numero aleatorio hasta el maximo
    }
};
void mostrar(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]); // Muestro cada elemento
    }
};
int contar_aciertos(int a[], int b[], int n){
    int contador = 0;
    for(int i=0;i<n; i++){ // Recorro ambos vectores
        if(a[i] == b[i]){ // Si los numeros coincides
            contador++; // Voy sumando al contador
        }
    }
    return contador;
};
