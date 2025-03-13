#include <stdio.h>
#include <math.h>

int main(){

    int A, B, C;
    float MD;
    
    printf("Digite um número: \n");
    scanf("%d",&A);
    printf("Digite outro número: ");
    scanf("%d",&B);
    printf("Digite outro número: ");
    scanf("%d",&C);
    MD =  (A + B + C)/3;
    printf("A media aritimetica e: %.2f\n", MD);

    return 0;
}