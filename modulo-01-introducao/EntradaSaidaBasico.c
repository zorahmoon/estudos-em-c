//Cria um programinha que:
//Declare uma variável inteira, uma float e uma char.
//Peça pro usuário digitar um número inteiro, um número com vírgula (ponto) e uma letra.
//Depois, imprima tudo o que o usuário digitou, com uma mensagem bonitinha.

#include <stdio.h>

int main() {
    int n;
    float n2;
    char letra;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("Digite um número com ponto flutuante (float): ");
    scanf("%f", &n2);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);  // o espaço antes do %c evita problemas com o buffer

    printf("\nVocê digitou:\n");
    printf("Número inteiro: %d\n", n);
    printf("Número float: %.2f\n", n2);
    printf("Letra: %c\n", letra);

    return 0;
}