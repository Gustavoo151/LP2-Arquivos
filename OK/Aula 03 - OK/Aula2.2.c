#include <stdio.h>

int main(){

    int *ponteiro;
    int numero = 6;

    ponteiro = &numero;

    printf("%d\n", *ponteiro); // Tem que usar um * na frente para imprimir o número
    printf("%p\n", ponteiro); 
    printf("%d\n", ponteiro); 
    
    return 0;
}