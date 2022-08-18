#include <stdio.h>

int main() {
    int ced;

    float cedulas[11] = {50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.50, 0.20, 0.10, 0.05, 0.01}, valor;

    printf("Digite o valore a ser pago: ");
    scanf("%f", &valor);

    do {
        for (int i =0; i < 11; i++){
            
            if (valor >= cedulas[i]){    // Contando as cédulas

                do {valor -= cedulas[i];
                    ced ++;
                    } while (valor >= cedulas[i]);

                printf("%d de R$ %.2f\n" ,ced, cedulas[i]);
                ced = 0;
            }
        }
    } while (valor >= 0.01);  // Em toda eu perderia 0.01 centavos ou 0,009999 centavos

    return 0;
}