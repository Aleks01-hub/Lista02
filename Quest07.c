#include <stdio.h>

int main(){

    int A;

    printf("Digite um numero: ");
    scanf("%d",&A);
    printf("Seu valor em decimal é: %d\n",A );
    printf("Seu valor em octal é: %o\n",A );
    printf("Seu valor em hexadecimal é: %x\n",A );

    return 0;
}