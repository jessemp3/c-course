//
// Created by jesse on 26/03/2026.
//

#include <stdio.h>

int main() {
    int a , b , soma ;

    printf("Digite o primeiro valor:");
    scanf("%d", &a);

    printf("Digite o segundo valor:");
    scanf("%d", &b); // o scanf lê o valor digitado no prompt

    soma = a + b ;
    printf("A soma dos dois valores é: %d", soma);

    return 0;
} 