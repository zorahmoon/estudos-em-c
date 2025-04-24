// Crie um programa que receba dois números inteiros do usuário e exiba:
// 1. A soma dos dois números
// 2. A diferença entre eles
// 3. O produto (multiplicação)
// 4. O quociente da divisão inteira
// 5. O resto da divisão


#include <stdio.h>

int main(){
    int n1, n2, soma, diferenca, produto, quociente, resto;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    diferenca = n1 - n2;
    produto = n1 * n2;
    quociente = n1 / n2;
    resto = n1 % n2;

    printf("Resultado da Soma: %d\n", soma);
    printf("Resultado da Diferença: %d\n", diferenca);
    printf("Resultado do Produto: %d\n", produto);
    printf("Resultado do Quociente: %d\n", quociente);
    printf("Resultado do Resto da Divisão: %d\n", resto);

    return 0;
}