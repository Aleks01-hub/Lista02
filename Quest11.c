#include <stdio.h> //QUESTÃO 11
#include <math.h>
int main() {
    float x1 ,y1, x2, y2, distan;

    printf("Digite o valor de x1: \n", x1);
    scanf("%f", &x1);

    printf("Digite o valor de y1: \n", y1);
    scanf("%f", &y1);

    printf("Digite o valor de x2: \n", x2);
    scanf("%f", &x2);

    printf("Digite o valor de y2: \n", y2);
    scanf("%f", &y2);

    distan = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia e: %.4f\n", distan);

    return 0;

}