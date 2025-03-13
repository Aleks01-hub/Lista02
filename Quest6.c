#include <stdio.h>
#define ano 2025

int main(){

int nasc;
int idade;

printf("Digite o ano do seu nascimento: ");
scanf("%d",&nasc);
idade = (ano-nasc);
printf("A sua idade é: %d\n",idade);

    return 0;
}
