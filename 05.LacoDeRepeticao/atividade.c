// Criar um programa que exibe os primeiros 10 números da sequência de Fibonacci (onde cada número é a soma dos dois anteriores).

#include <stdio.h>

int main() {
    // Declarando variáveis:
    // n1 e n2 são os dois primeiros termos da sequência de Fibonacci
    // nextTerm vai armazenar o próximo termo calculado
    int n1 = 0, n2 = 1, nextTerm;

    printf("Sequência de Fibonacci até 10 termos:\n");

    // Laço for para imprimir os 10 primeiros termos da sequência de Fibonacci
    for (int i = 1; i <= 10; i++) {  // O loop começa em 1 e vai até 10 (inclusive)
        printf("%d, ", n1);  // Imprime o valor de n1 (o termo atual da sequência)

        // Calculando o próximo termo da sequência de Fibonacci
        nextTerm = n1 + n2;  // O próximo termo é a soma dos dois anteriores

        // Atualizando os valores de n1 e n2 para os próximos termos
        n1 = n2;  // O valor de n1 agora vai ser o valor de n2
        n2 = nextTerm;  // O valor de n2 vai ser o próximo termo calculado (nextTerm)
    }

    return 0;
}