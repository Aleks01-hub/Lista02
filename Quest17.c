#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {

    float angulo, radiano, seno, cosseno, tangente;

    printf("Digite o numero: \n");
    scanf("%f", &angulo);

    radiano = angulo * PI/180;
    seno = sin(radiano);
    cosseno = cos(radiano);
    tangente = tan(radiano);

    printf("Seno: %.2f\n", seno);
    printf("Cosseno: %.2f\n", cosseno);
    printf("Tangente: %.2f\n", tangente);

    return 0;
}