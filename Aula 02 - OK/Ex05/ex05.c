#include <stdio.h>

int main(){

    int codProduto, quantProduto, quantVendidos = 0;

    do {
        printf("Digite o código e a quantide de produtos: ");
        scanf("%d %d", &codProduto, &quantProduto);
        quantVendidos += quantProduto;
    } while (codProduto != 0 || quantProduto != 0);

    printf("A quantidade de produtos vendidos foi de %d\n", quantVendidos);

    return 0;
}