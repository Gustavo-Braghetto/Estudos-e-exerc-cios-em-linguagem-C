#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite numeros (0 para encerrar):\n");

    scanf("%d", &numero);
    while (numero != 0) {
        soma += numero;
        scanf("%d", &numero);
    }

    printf("Soma total: %d\n", soma);

    return 0;
}
