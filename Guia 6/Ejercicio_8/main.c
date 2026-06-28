#include <stdio.h>
#include <stdlib.h>
/*8. Modificar el programa anterior para implementar un menú de opciones que permita
elegir qué opción se desea calcular, mediante la fórmula de la Ley de Ohm:
1) Calcular R.
2) Calcular I.
3) Calcular V.
4) Salir.
*/
float calcular_R(float a, float b);
float calcular_I(float a, float b);
float calcular_V(float a, float b);
int main()
{
    float corriente, tension, resistencia;
    int option;
    do{
        printf("------Menu para calcular la Resistencia-----\n");
        printf("\t 1) Calcular R\n"); // Resistencia
        printf("\t 2) Calcular I\n"); // Corriente
        printf("\t 3) Calcular V\n"); // Tension
        printf("\t 4) Salir\n");
        printf("--------------------------------------------\n");
        printf("Ingrese la opcion que desee(En numero): ");
        scanf("%d", &option);
        if(option==1){
            printf("Ingrese la tension: ");
            scanf("%f", &tension);
            printf("Ingrese la corriente:");
            scanf("%f", &corriente);
        } else if (option==2){
            printf("Ingrese la tension: ");
            scanf("%f", &tension);
            printf("Ingrese la resistencia:");
            scanf("%f", &resistencia);
        } else if(option !=4){
            printf("Ingrese la resistencia:");
            scanf("%f", &resistencia);
            printf("Ingrese la corriente:");
            scanf("%f", &corriente);
        }
        switch(option){
            case 1: resistencia = calcular_R(tension, corriente);
                    printf("La resistencia es: %.2f\n", resistencia);
                break;
            case 2:
                    corriente = calcular_I(tension, resistencia);
                    printf("La corriente es: %.2f\n", corriente);
                break;
            case 3: tension = calcular_V(resistencia, corriente);
                    printf("La tension es: %.2f\n", tension);
                break;
            case 4: printf("-----Terminando el programa-----");
                break;
            default: printf("Opcion incorrecta. Ingrese una opcion valida\n");
        }
    }while(option !=4);
    return 0;
}
//(V = I ∗ R) ⇒ (R = V/I).
float calcular_R(float a, float b){ // Resistencia
    return  a / b;
};
float calcular_I(float a, float b){ // Corriente
    return a / b;
};
float calcular_V(float a, float b){ // Tension
    return  a*b;
};
