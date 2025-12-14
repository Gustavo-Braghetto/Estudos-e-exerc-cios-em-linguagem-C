#include <stdio.h>

int main() {
    int opcao;

    while (opcao != 3) {
        printf("\n1 - Mostrar mensagem\n");
        printf("2 - Outra opcao\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Opcao 1 selecionada\n");
                break;
            case 2:
                printf("Opcao 2 selecionada\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }

    return 0;
}
