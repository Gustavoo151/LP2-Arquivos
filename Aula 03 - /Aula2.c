#include <stdio.h>

int main(){

    int assentos[24] = {0}, cpf = 0, contAssento = 0, opcMenu = 1;


    do{
        printf("\nMENU: \n1- Adicionar assento: \n2- Listar assentos Vazios: \n3- Cancelar passagem: \n0- Finalizar: \n");
        scanf("%d", &opcMenu);

        switch (opcMenu){

            case 1:
                printf("Digite seu CPF: ");
                scanf("%d", &cpf);

                if (contAssento < 13){
                    for (int i = 1; i < 24; i += 2){
                        if (assentos[i] == 0){
                            assentos[i] = cpf;
                            printf("<%d> -- Assento #<%d> (Janela)\n", cpf, i);
                            contAssento ++;
                            printf("%d \n", contAssento);
                            break;
                        }  
                    }
                }

                if (contAssento > 12){
                    for(int j = 0; j < 24; j += 2){
                        if (assentos[j] == 0){
                            assentos[j] = cpf;
                            printf("<%d> -- Assento #<%d> (Corredor)\n", cpf, j);
                            break;
                            }
                        }
                    }
                    break;

            case 2:
                for (int i = 0; i < 24; i ++){
                    if (assentos[i] == 0)
                        printf("Assento %d vazio.\n", i);
                }
                break;

            case 0:
                break;
            
            default:
                printf("Opção inválida.\n\n");
            }

        }while(opcMenu != 0);
    
    return 0;
}

// Consertar if pq está pegando o mesmo valor no cont 13