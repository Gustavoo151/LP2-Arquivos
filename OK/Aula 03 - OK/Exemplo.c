#include <stdio.h>
#include <string.h>

void troca(int *x, int *y){  // Passando dos ponteiros *x *y
    int temp = *x; // Variável temp recebendo o ponteiro *x
    *x  = *y;  // Ponteiro *x rebendo o ponteiro *y
    *y = temp; // Ponteiro *y recebendo temp que tem o antigo ponteiro *x
}

void trocaBugando(int x, int y){  // Trocando sem usar ponteiro
    int temp = x;
    x = y;
    y = temp;
}

int main(){

    int a = 1, b = 2;

    trocaBugando(a,b); 
    printf("a = %d, b = %d\n",a,b);

    troca(&a,&b); // Usando o & para passar o endereço de memória
    printf("a = %d, b = %d\n",a,b);

    return 0;
}
