#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*10. Hacer un programa que nos permita conocer cualitativamente cómo finalizó nuestro
    cuatrimestre en la Universidad. Para ello, deberá ingresar las notas finales de sus cuatro
    materias: Nota de [_Nombre_de_Materia_1], Nota de [_Nombre_de_Materia_2],
    Nota de [_Nombre_de_Materia_3] y Nota de [_Nombre_de_Materia_4]. El programa deberá calcular el promedio de dichas materias y mostrar en pantalla lo siguiente:
    Si el promedio es menor a 4 → Promedio insuficiente
    Si el promedio es 4 → Promedio regular
    Si el promedio es mayor a 4 y menor a 6 → Bueno
    Si el promedio es mayor a 6 y menor a 8 → Muy buen promedio
    Si el promedio está entre 8 y 9 → Excelente promedio
    Si el promedio es 10 → ¡Sobresaliente!*/
    printf("----------------------------------------");
    printf("\n------Calcular Promedio de Notas------");
    printf("\n--------------------------------------");
    int materia1, materia2, materia3, materia4; // Inicializo el espacio para ingresar los tres numeros y auxiliares
    float promedio=0;

    printf("\nNota de Fundamentos de la Informacion: "); // Pedimos que se ingrese un numero
    scanf("%d", &materia1); // Guardamo el numero en su espacio
    printf("\nNota de Matematica Discreta: "); // Pedimos que se ingrese un numero
    scanf("%d", &materia2); // Guardamo el numero en su espacio
    printf("\nNota de Analisos Matematico: "); // Pedimos que se ingrese un numero
    scanf("%d", &materia3); // Guardamo el numero en su espacio
    printf("\nNota de Teoria de la Informacion: "); // Pedimos que se ingrese un numero
    scanf("%d", &materia4); // Guardamo el numero en su espacio

    promedio= (materia1+materia2+materia3+materia4)/4.0;
    if(promedio<4){
        printf("\nSu promedio %.2f es INSUFICIENTE", promedio); //Informo al usuario SU PROMEDIO
    } else if(promedio==4){
        printf("\nSu promedio %.2f es REGULAR", promedio); //Informo al usuario SU PROMEDIO
    } else if(promedio>=4 && promedio<6){
        printf("\nSu promedio %.2f es BUENO", promedio); //Informo al usuario SU PROMEDIO
    } else if(promedio >= 6 && promedio < 8){
        printf("\nSu promedio %.2f es MUY BUEN PROMEDIO", promedio); //Informo al usuario SU PROMEDIO
    } else if(promedio >= 8 && promedio <= 9){
        printf("\nSu promedio %.2f es EXCELENTE PROMEDIO", promedio); //Informo al usuario SU PROMEDIO
    } else{
        printf("\nSu promedio %.2f es ¡SOBRESALIENTE!", promedio); //Informo al usuario SU PROMEDIO
    }
    printf("\n----------------------------------");
    printf("\n --FIN--");
    return 0;
}
