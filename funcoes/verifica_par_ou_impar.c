#include <stdio.h>

int ehPar(int numero) {
    if (numero % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPar(n))
        printf("Numero par\n");
    else
        printf("Numero impar\n");

    return 0;
}
