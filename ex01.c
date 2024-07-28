#include <stdio.h>

#define SIZE 4

void lerMatriz(int matriz[SIZE][SIZE], const char* nome) {
    printf("Digite os elementos da matriz %s (4x4):\n", nome);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Preencha o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[SIZE][SIZE], const char* nome) {
    printf("Matriz %s:\n", nome);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somarMatrizes(int A[SIZE][SIZE], int B[SIZE][SIZE], int Soma[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            Soma[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], Soma[SIZE][SIZE];

    
    lerMatriz(A, "A");
    lerMatriz(B, "B");

    somarMatrizes(A, B, Soma);

    imprimirMatriz(A, "A");
    imprimirMatriz(B, "B");
    imprimirMatriz(Soma, "Soma");

    return 0;
}
