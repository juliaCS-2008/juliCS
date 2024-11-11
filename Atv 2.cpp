#include <stdio.h>

int main() {
    int matriz1[4][4], matriz2[4][4], resultado[4][4];
    int i, j;

    
    printf("Digite os valores para a primeira matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    
    printf("\nDigite os valores para a segunda matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    
    printf("\nMatriz resultado da soma:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

