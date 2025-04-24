#include <stdio.h>

// Essa é uma função do tipo 'void' → ou seja, ela não retorna nenhum valor.
// Apenas executa uma ação: imprime uma mensagem na tela.
void mostrarMensagem() {
    printf("Olá! Essa é uma função do tipo void.\n");
}

// Esta é uma função que retorna um número inteiro.
// Ela recebe um número como argumento e devolve o dobro desse número.
int calcularDobro(int numero) {
    int resultado = numero * 2;
    return resultado; // Retorna o valor calculado para quem chamou a função
}

int main() {
    // Chamando a função que não retorna nada, apenas imprime uma mensagem
    mostrarMensagem();

    // Declarando uma variável
    int valor = 7;

    // Chamando a função que retorna o dobro do valor
    int dobro = calcularDobro(valor);

    // Imprimindo o resultado na tela
    printf("O dobro de %d é %d\n", valor, dobro);

    return 0;
}