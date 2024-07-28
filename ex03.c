#include <stdio.h>

#define LINHAS 3
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int somaLinhas[LINHAS] = {0};  

    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        int soma = 0;
        for (int j = 0; j < COLUNAS; j++) {
            soma += matriz[i][j];
        }
        somaLinhas[i] = soma; 
    }

    printf("Vetor de somas das linhas:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("Soma da linha %d: %d\n", i, somaLinhas[i]);
    }

    return 0;
}
