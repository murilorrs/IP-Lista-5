#include <stdio.h>

#define ORDEM 10

int main() {
    int triangulo[ORDEM][ORDEM] = {0};

    for (int i = 0; i < ORDEM; i++) {
        triangulo[i][0] = 1;
        triangulo[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
        }
    }

    for (int i = 0; i < ORDEM; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%4d", triangulo[i][j]);
        }
        printf("\n");
    }

    return 0;
}
