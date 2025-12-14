#include <stdio.h>

int main() {
    int x = 10;
    int *p;

    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}
