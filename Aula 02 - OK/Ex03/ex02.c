#include <stdio.h>

int main(){

    for (int i = 1; i <= 10; i++){   // (A)

        for(int c = 1; c <= i; c++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 10; i++){  // (B)
        
        for (int c = 10; c >= i; c --)
            printf("*");
        
        printf("\n");
    }
    
    printf("\n");

    for (int i = 1; i <= 10; i++){  // (C)
        
        for(int c = 1; c <= i; c++){
            printf(" ");
        }
        
        for (int c = 10; c >= i; c --)
            printf("*");
        
        printf("\n");
    }


    printf("\n");

    for (int i =1; i <= 10; i++){   //(D)

        for (int c = 10; c >= i; c --)
            printf(" ");

        for (int c = 1; c <= i; c ++)
            printf("*");
        // for (int c = 10; c >= i; c --)
        //     printf("-");
        
        printf("\n");
    }

    return 0;
}