#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
};

int main() {
    struct Aluno a = {"Carlos", 20};
    struct Aluno *p = &a;

    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);

    return 0;
}
