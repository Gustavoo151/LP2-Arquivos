#include <stdio.h>

int cpf(){
    int cpf =0;
    printf("Digite seu CPF: \n[-1 lista todos os assentos vazios] \n[0 finaliza o programa]: ");
    scanf("%d", &cpf);

    return cpf;
}

int main() {
    int i, c;
    int assentos[24];


    for(i=0; i< 24; i++){
        assentos[i] = 0;
    }

    if(cpf == -1){
        for(i=0; i<24; i++){
            if (assentos[i] == 0){
                printf("Assento na posicao %d vazio\n", i);
            }
        }
    }

    else if(cpf == 0){
        printf("parar");
    }
    else{
        for(c=0; c <2; c++){
            for(i=0; i<24; i++){
                    if(i% 2 == 1){
                        if (assentos[i] == 0){
                            assentos[i] = cpf();
                            printf("Assento reservado ao lado da janela na posicao %i\n", i);
                }
            }
        }
    }
}
    printf(" ");
    return 0;
}

/* Falta colocar em ordem os if's, chamar a função cpf nas condicionais,
consertar o if e mostrar o mapa, cancelar passegens e  
fazer o controle de assentos com tamanho do vertor para não dar estouro de memória */
