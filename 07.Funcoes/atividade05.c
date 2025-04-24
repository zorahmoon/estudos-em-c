#include <stdio.h>

// Função que analisa a média e retorna uma mensagem com a situação
const char* verificarSituacao(float media) {
    if (media >= 7.0) {
        return "Aprovado";
    } else if (media >= 5.0) {
        return "Recuperação";
    } else {
        return "Reprovado";
    }
}

float lerNota() {
    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);
    return nota;
}

int main() {
        float nota1 = lerNota();
        float nota2 = lerNota();
        float nota3 = lerNota();

    float media = (nota1 + nota2 + nota3) / 3;

    // Recebe o retorno da função em uma string (const char*)
    const char* situacao = verificarSituacao(media);

    printf("Média: %.2f\n", media);
    printf("Situação: %s\n", situacao);

    return 0;
}