#include <stdio.h>
#include <math.h>

int main(){

    double x, raiz, poten;

    printf("Digite um valor inicial: ");
    scanf("%lf", &x);
    raiz = sqrt(x);
    printf("Valor da raiz quadrada: %.2f\n", raiz);

    x = ceil(x);

    poten = pow(x, 2);

    printf("Valor de %.2lf ao quadrado: %.2f\n",x, poten);

    return 0;
}