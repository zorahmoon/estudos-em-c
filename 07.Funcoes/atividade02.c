#include <stdio.h>

// Função que recebe dois inteiros e retorna o maior deles
int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 10;
    int y = 20;

    // Chamada da função
    int resultado = maior(x, y);

    printf("O maior entre %d e %d é %d\n", x, y, resultado);

    return 0;
}