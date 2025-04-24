#include <stdio.h>

// Função que calcula a média de 3 notas (float) e retorna a média
float calcularMedia(float n1, float n2, float n3) {
    float media = (n1 + n2 + n3) / 3;
    return media;
}

int main() {
    float nota1 = 7.5;
    float nota2 = 8.0;
    float nota3 = 9.2;

    float mediaFinal = calcularMedia(nota1, nota2, nota3);

    printf("A média final é: %.2f\n", mediaFinal);

    return 0;
}