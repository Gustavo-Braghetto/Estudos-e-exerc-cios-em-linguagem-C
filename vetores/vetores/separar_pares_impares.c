#include <stdio.h>

int main() {
    int vetor[10];
    int vpar[10];
    int vimp[10];
    int k = 0, j = 0;

    for (int y = 0; y < 10; y++) {
        printf("Digite o numero %d: ", y + 1);
        scanf("%d", &vetor[y]);

        if (vetor[y] % 2 == 0) {
            vpar[k] = vetor[y];
            k++;
        } else {
            vimp[j] = vetor[y];
            j++;
        }
    }

    printf("\nNumeros pares:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", vpar[i]);
    }

    printf("\n\nNumeros impares:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", vimp[i]);
    }

    return 0;
}
