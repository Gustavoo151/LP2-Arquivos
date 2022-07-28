#include <stdio.h>

// Posição jogador X
int jog_X(){
    char x;
    int coluna, linha;

    printf("Vez do jogador X\nDigite qual coluna e linha voce quer jogar: ");
    scanf("%d %d", &coluna, &linha);

    return coluna, linha;
}

// Posição jogador O
int jog_O(){
    char O;
    int coluna, linha;

    printf("Vez do jogador X\nDigite qual coluna e linha voce que jogar: ");
    scanf("%d %d", &coluna, &coluna);

    return coluna, linha;
}

// Preenchimento e verificação de lugares
void mapa(coluna, linha){
    char mapa[3][3];


}

int main() {
    int a, b;

    printf("----Jogo da velha----\n");

for(a=1; a <= 9; a++) {

    if (a % 2 == 1)
    {
        printf("jogador X %d\n", a); 
    }

    else if (a % 2 == 0)
    {
        printf("jogador O %d\n", a);
    }
    
    }   

    return 0;
}