#include <stdio.h>

int main(){

    int num[5]; 

    for (int i = 0; i < 5; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++){
        for (int c = 0; c < num[i]; c++)
            printf("*");

        printf("\n");
    }

    return 0;
}