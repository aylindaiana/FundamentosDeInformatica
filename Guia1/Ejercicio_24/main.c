#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*24. Escriba un programa que permita introducir las notas de 4 materias: QUÍMICA, FÍSICA, MATEMÁTICA e INFORMÁTICA, y que a partir de las notas calcule el promedio
    general de notas.*/
    float quimica, fisica, matematica, informatica, promedio; // Variable para las 4 materias y el promedio para calcular

    printf("CALCULAR EL PROMEDIO GENERAL DE 4 MATERIAS\n");

    printf("Ingrese la nota de QUIMICA: "); // Solicito nota de quimica
    scanf("%f", &quimica); // Guardo el valor

    printf("Ingrese la nota de FISICA: "); // Solicito nota de fisica
    scanf("%f", &fisica); // Guardo el valor

    printf("Ingrese la nota de MATEMATICA: "); // Solicito nota de matematica
    scanf("%f", &matematica); // Guardo el valor

    printf("Ingrese la nota de INFORMATICA: "); // Solicito nota de informatica
    scanf("%f", &informatica); // Guardo el valor

    promedio = (quimica + fisica + matematica + informatica) / 4; // Calculo el promedio

    printf("\n------------------------------");
    printf("\nPromedio general de notas: %.2f", promedio); // Muestro el promedio
    printf("\n------------------------------");

    printf("\n--FIN--"); // Fin del programa
    return 0;
}
