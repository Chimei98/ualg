
/*
  Álgebra Linear - Criação de uma matriz
    - Requerimento de linhas e colunas
    - Incrementento de elementos na matriz
    - Apresentação dos elementos organizadamente
*/

#include <stdio.h>

    int main(void){
        int n, k;
        printf("Quantas linhas? ");
        scanf("%d", &n);
        printf("Quantas colunas? ");
        scanf("%d", &k);
        
        int matriz[n][k];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                printf("Insira o numero: ");
                scanf(" %d", &matriz[i][j]);
            }
        }

        printf("\nMatriz desejada: \n");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                printf("[%d] ", matriz[i][j]);
            }
            printf("\n");
        }

        return 0;

    }
