#include <stdio.h>

int main() {
    int numero, soma = 0;

    do {
        printf("Digite um numero (digite um numero negativo para sair): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;
        }
    } while (numero >= 0);

    printf("A soma dos numeros digitados é: %d\n", soma);
    return 0;
}