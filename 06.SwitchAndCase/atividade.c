#include <stdio.h>

int main(){
    int opcao;

    printf("Menu de Opções: \n");
    printf("1 - Cadastrar Usuário\n");
    printf("2 - Deletar Usuário\n");
    printf("3 - Atualizar Usuário\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Você escolheu cadastrar um novo usuário.\n");
        break;
    case 2:
        printf("Você escolheu deletar um usuário.\n");
        break;
    case 3:
        printf("Você escolheu atualizar um usuário.\n");
        break;
    default:
        printf("Opção inválida!\n");

        return 0;

    }
}