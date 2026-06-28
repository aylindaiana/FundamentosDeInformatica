#include <stdio.h>
#include <stdlib.h>

/*7. Hacer una función que, dados los valores de la corriente (I) y de la tensión (V), calcule
el valor de la resistencia (R) mediante la Ley de Ohm. (V = I ∗ R) ⇒ (R = V/I). */

int calculo_resistencia();
int main()
{
    float rta;
    printf("-----Calculemos la resistencia------\n");
    rta = resistencia();
    printf("Mediante la Ley de 0hm la resistencia es: %.2f", rta);
    return 0;
}
int resistencia(){
    int corriente, tension;
    float rta;

    printf("Ingrese la corriente: ");
    scanf("%d", &corriente);
    printf("Ingrese la tension: ");
    scanf("%d", &tension);
    return (float) tension / corriente;
}
