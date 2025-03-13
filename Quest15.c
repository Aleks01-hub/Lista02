#include <stdio.h>
#include <math.h>

int main() {
    //PROGRESSAO ARITMETICA 
    int n;
    double an, a1, r;

    printf("Digite o numero desejado: \n");
    scanf("%d", &n);
    printf("Digite o primeiro numero da progressao: \n");
    scanf("%lf", &a1);
    printf("Digite a razao da progressao: \n");
    scanf("%lf", &r);
    an = a1 + (n - 1) * r;
    printf("O numero %d e igual a %.2f \n.", n, an);


    return 0;
}