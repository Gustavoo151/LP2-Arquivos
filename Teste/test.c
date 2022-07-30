#include <stdio.h>


int jogador(){
    int *linha, *coluna;
    printf("Sua vez de jogar. Digite Linha e Coluna: ");
    scanf("%d %d", &linha, &coluna);

    return *linha, *coluna;
}

void validar_jogada(int linha, int coluna){
    printf("linha: %d\nColuna: %d", linha, coluna);
    }


int main(){
    int teste, teste1;

    printf("%d\n",jogador());
    //printf("teste: %d\nTeste1: %d\n", teste,teste1);
    validar_jogada(1,2);

    return 0;
}