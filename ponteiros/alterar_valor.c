#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;

    *p = 20;

    printf("Novo valor de x: %d\n", x);

    return 0;
}
