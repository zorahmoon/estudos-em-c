#include <stdio.h>

// Calcula a média de 3 notas
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Verifica se o aluno foi aprovado com base na média
void verificarAprovacao(float media) {
    if (media >= 7.0) {
        printf("Aluno aprovado com média %.2f!\n", media);
    } else {
        printf("Aluno reprovado com média %.2f.\n", media);
    }
}

int main() {
    float nota1 = 6.0, nota2 = 8.0, nota3 = 7.0;

    // Chama a função que calcula a média
    float mediaFinal = calcularMedia(nota1, nota2, nota3);

    // Chama a função que verifica a aprovação
    verificarAprovacao(mediaFinal);

    return 0;
}