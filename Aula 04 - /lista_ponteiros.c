/* malloc(numero_bytes)  
- Esta função aloca a quantidade de bytes solicitada e
devolve um ponteiro, em caso de sucesso
- Caso o SO não pode fornecer mais memória, um ponteiro nulo é retornado. Logo, sempre teste o retorno antes de usar
o ponteiro!
*/

/*
A função sizeof(tipo) calcula a quantidade de memória necessária para um tipo. Use esta função para tornar seu programa independente de arquitetura
– malloc(sizeof(int)) //aloca memória para 1 inteiro
– malloc(sizeof(float)) //aloca memória para 1 float
*/
 #include <stdio.h>
 #include <stdlib.h> // Biblioteca necessária para usar as funçẽos malloc(), free() e calloc()

int main(){

    int *p1;

    p1 = malloc(sizeof(int));  // Verificando tamanho pedido e alocando ele se possível

    if (p1){ // Sempre teste se o ponteiro não é nulo
        *p1 = 12; // Atribuindo 12 ao espaço de memória alocado
    printf("%d\n", *p1);
    }    
    
    free(p1); // Usada para liberar o espaço na memória usado

    return 0;
}
