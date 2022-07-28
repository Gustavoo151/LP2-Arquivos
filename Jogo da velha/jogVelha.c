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

// Preenchimento e verificação de lugares, Mostrar Mapa
void mapa(coluna, linha){
    char mapa[3][3];
    int a, b;

    if (mapa[coluna][linha] == 'x' && 'o')
    {   
        printf("Lugar oculpado, Digite outro: ");

        if (mapa[coluna][linha] == 'x')
        {
            jog_X();
        }

        else if (mapa[coluna][linha] == 'o')
        {
            jog_O();
        }
        
    }





    for(a =1; a <= 3; a++)
    {
        for(b =1; b<= 3; b++);
        {
            printf("%d test", mapa[a][b]);
        }
    }

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