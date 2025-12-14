#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
};

int main() {
    struct Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
    }

    printf("\nAlunos cadastrados:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s - %d anos\n", alunos[i].nome, alunos[i].idade);
    }

    return 0;
}
