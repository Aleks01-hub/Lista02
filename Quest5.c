#include <stdio.h>

int main (){

    int x1,x2, y, z, c, A;

    y = 6;
    z = 8;
    c = 2;
    x1 = ((y * z) - z)/c;
    x2 = (z / 2)/ y++;
    A = (x1 + x2);
    printf("O resultado de (x1 +x2) e: %d\n", A);
    return 0 ;
}