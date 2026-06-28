#include <stdio.h>
#include <stdlib.h>
/*9. Hacer un programa que permita ingresar la cantidad de horas extra trabajadas por un
operario, el valor de hora extra y que calcule el salario extra que deberá pagarse por
ese tiempo extra trabajado.*/
int salario_extra();
int main()
{
    float salario_extra_final;
    printf("-----Calculo de salario extra-----\n");
    salario_extra_final = salario_extra();
    printf("Su salario extra final es: %.2f", salario_extra_final);
    return 0;
}
int salario_extra(){
    int horas;
    float valor;
    printf("Ingrese la cantidad de horas extra trabajadas: ");
    scanf("%d", &horas);
    printf("Ingrese el VALOR de horas extra trabajadas: ");
    scanf("%f", &valor);
    return (float) horas * valor;
};
