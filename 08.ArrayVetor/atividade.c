#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0;

    for (int i = 0; i < 5; i++){
        printf("Digite um número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Laço para percorrer o vetor e somar os valores
    for (int i = 0; i < 5; i++) {
        soma += numeros[i]; // "+=" significa: soma = soma + numeros[i];
    }

    printf("A soma dos valores é: %d\n", soma);

    return 0;
}