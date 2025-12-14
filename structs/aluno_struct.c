#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float media;
};

int main() {
    struct Aluno aluno;

    printf("Nome do aluno: ");
    scanf(" %[^\n]", aluno.nome);

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("Media final: ");
    scanf("%f", &aluno.media);

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Media: %.2f\n", aluno.media);

    return 0;
}
