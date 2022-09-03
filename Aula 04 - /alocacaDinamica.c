#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p1;
    float *p2;

    // Aloca memória
    p1 = malloc(sizeof(int));
    p2 = malloc(sizeof(float));

    if (p1 && p2){ // Sempre teste se o ponteiro não é nulo 
        *p1 = 12; // Atribui 12 ao espaço de memória alocado

        // Lê do teclado um float. Repare que por ser inteiro,
        scanf()


    }




    return 0;
}