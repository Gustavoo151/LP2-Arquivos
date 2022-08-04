#include <stdio.h>

int main(){
    char vetor[100];
    int valor = 0, a,b;;
    
    
    for(a=0; a<=100; a++){
        vetor[a] = "A";
    }
    
    
    void add_fim(int add_fim) {// Adicionar no fim do vetor
        for(b=0; b<=100; b++){
        
            if (vetor[b] == "A"){
                vetor[b] = add_fim;
                break;
        }
    }
}

    printf("1 - Para adicionar no fim: \n2 - Para adicionar no inicio: \n3 - Para remover do início: \n4 - Para remover do fim: ");
    scanf("%d", &valor);
    
    
    switch(valor){
        case 1:
            add_fim(valor);

        case 2:
            for(b=0; b<=100; b++){
            printf("%c\n", vetor[b]);
        }
    }
    return 0;
}
