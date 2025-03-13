#include <stdio.h>

int main (){
    
    int A, B, adc, sub, mult, div;
    
    printf("Digite um valor: ");
    scanf("%d", &A);
    printf("Digite outro valor: ");
    scanf("%d", &B);
    adc= (A + B);
    sub = (A - B);
    mult = (A * B);
    div = (A / B);
    printf("Soma: %d\n", adc);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %d\n", div);
    return 0;
}