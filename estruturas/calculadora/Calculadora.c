//
// Created by jesse on 30/03/2026.
//

#include <stdint.h>
#include <stdio.h>

int main() {
    char operacao;
    float num1 , num2 , resultado;

    printf("Digite a operaçaõ '+ , - , * , /': \n");
    scanf("%c" , &operacao);

    printf("Digite o primeiro valor \n");
    scanf("%f" , &num1);

    printf("Digite o seundo valor \n");
    scanf(" %f" , &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado %.2f" , resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado %.2f" , resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado %.2f" , resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado %.2f" , resultado);
            }
            break;
        default: printf("Operação invalida") ;
    }

    return 0;
}
