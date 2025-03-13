#include <stdio.h>
#include <math.h>

int main() {
    //PROGRESSAO GEOMETRICA
    int n;
    double an, a1, q;

    printf("Digite o numero desejado: \n");
    scanf("%d", &n);
    printf("Digite o primeiro numero da progressao: \n");
    scanf("%lf", &a1);
    printf("Digite a razao da progressao: \n");
    scanf("%lf", &q);
    an = a1 * pow(q, n - 1);
    printf("O numero %d e igual a %.2f \n.", n, an);


    return 0;
}