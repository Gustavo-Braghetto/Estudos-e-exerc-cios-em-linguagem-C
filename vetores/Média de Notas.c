#include <stdio.h>

int main() {
    float notas[4], soma = 0;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("Media: %.2f\n", soma / 4);

    return 0;
}
