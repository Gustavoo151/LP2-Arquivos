#include <stdio.h>

// Função de mostrar mapa
void mostrar_mapa(){
    for(cont_primario=0; cont_primario<3; cont_primario++){
        for(cont_secundario=0; cont_secundario<3; cont_secundario++){
            printf("%c ",mapa[cont_primario][cont_secundario]);
            }
        printf("\n"); 
    }
}

// Escolha do jogador
int jogada(){
    printf("Digite Linha e Coluna: ");
    scanf("%d %d", &linha, &coluna)

    return linha, coluna;
}

void validar_jogada(int linha, int coluna){
    printf

    }

int main(){
    int mapa[3][3], cont_primario, cont_secundario, linha, coluna;

<<<<<<< Updated upstream
    // Preenchimento de vetor
    for(cont_primario=0; cont_primario<3; cont_primario++){
        for (cont_secundario=0; cont_secundario<3; cont_secundario++){
            mapa[cont_primario][cont_secundario] = '%%';
=======
    for(a =1; a <= 3; a++)
    {
        for(b =1; b<= 3; b++);
        {
            printf("%d test", mapa[a][b]);
>>>>>>> Stashed changes
        }
    }

    return 0;
}