#include <stdio.h>

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("Maior valor: %d\n", maior(x, y));

    return 0;
}
