#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto p;

    printf("Nome do produto: ");
    scanf(" %[^\n]", p.nome);

    printf("Preco: ");
    scanf("%f", &p.preco);

    printf("Quantidade: ");
    scanf("%d", &p.quantidade);

    printf("\nProduto cadastrado:\n");
    printf("Nome: %s\n", p.nome);
    printf("Preco: %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);

    return 0;
}
