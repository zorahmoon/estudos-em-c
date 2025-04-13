// Criar um programa que pede a idade do usuário e verifica se ele pode votar. As condições são:
// 1. Menores de 16 anos não podem votar.
// 2. Entre 16 e 18 anos, o voto é opcional.
// 3. Maiores de 18 anos podem votar obrigatoriamente.

#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <16) {
        printf("Você não pode votar.\n");
    } else if (idade >= 16 && idade < 18) {
        printf("O voto é opcional.\n");
    } else {
        printf("Você deve votar!\n");
    }
    
    return 0;
}