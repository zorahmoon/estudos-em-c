// Programa que fará uma contagem regressiva da decolagem de um foguete:

#include <stdio.h>

int main() {
    int contagem = 10;

    printf("Preparar para a decolagem do foguete! 🚀\n\n");

    // Enquanto a contagem for maior ou igual a 0, continue o loop
    while (contagem >= 0) {
        printf("Faltam %d segundos...\n", contagem);
        contagem--; // Diminui 1 segundo a cada loop
    }

    // Quando o loop acabar, é hora da decolagem!
    printf("\nDecolagem! 🚀🌕\n");

    return 0;
}