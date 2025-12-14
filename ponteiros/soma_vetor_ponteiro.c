#include <stdio.h>

int soma(int *v, int tamanho) {
    int total = 0;

    for (int i = 0; i < tamanho; i++) {
        total += *(v + i);
    }

    return total;
}

int main() {
    int v[4] = {2, 4, 6, 8};

    printf("Soma: %d\n", soma(v, 4));

    return 0;
}
