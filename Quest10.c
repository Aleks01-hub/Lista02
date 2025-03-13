#include <stdio.h>

int main(){

    float metros, dm, cm, mm;

    printf(" Digite um valor em metros(m): ");
    scanf("%f", &metros);

    dm = (metros * 10);
    cm = (metros * 100);
    mm = (metros * 1000);

    printf("Seu valor convertido em decimetros(dm) equivalem a: %.2f\n", dm);
    printf("Seu valor convertido em centimetros(cm) equivalem a: %.2f\n", cm);
    printf("Seu valor convertido em milimetros(mm) equivalem a: %.2f\n", mm);

    return 0;
}
