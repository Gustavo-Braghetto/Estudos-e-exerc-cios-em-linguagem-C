#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("Resultado: %d\n", soma(x, y));

    return 0;
}
