#include <stdio.h>

int somaVetor(int v[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }

    return soma;
}

int main() {
    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Soma total: %d\n", somaVetor(v, 5));

    return 0;
}
