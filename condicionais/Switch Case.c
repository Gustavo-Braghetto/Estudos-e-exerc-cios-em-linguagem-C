#include <stdio.h>

int main() {
    int opcao;

    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Opcao Cadastrar\n");
            break;
        case 2:
            printf("Opcao Listar\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
