#include <stdio.h>

int main() {
    float alturas[][10];
    float maiorAltura;

    for (int i = 0; i < ; i++) {
        printf("Digite as alturas dos 10 da delegação %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Altura do atleta %d: ", j + 1);
            scanf("%f", &alturas[i][j]);
        }
    }

    for (int i = 0; i < ; i++) {
        maiorAltura = alturas[i][0];
        for (int j = 1; j < 10; j++) {
            if (alturas[i][j] > maiorAltura) {
                maiorAltura = alturas[i][j];
            }
        }
        printf("A maior altura da delegação %d é: %.2f metros\n", i + 1, maiorAltura);
    }

    return 0;
}
