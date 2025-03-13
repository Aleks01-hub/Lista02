#include <stdio.h>
#include <math.h>

int main(){
    
    float preco_unitario, valor_total;
    int quantidade;

    printf("Digite o preco do produto X: \n");
    scanf("%f", &preco_unitario);
    printf("Digite a quantidade de produtos X: \n");
    scanf("%d", &quantidade);
    valor_total = (preco_unitario * quantidade);
    printf("O valor total do estoque do produto X e de : %.2f\n", valor_total);

    return 0;
}
