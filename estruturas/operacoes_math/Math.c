//
// Created by jesse on 26/03/2026.
//

#include <stdio.h>


int main () {
    int i, num;                                       
    float soma = 0,media;

    printf("Digite 2 valores:\n");

    for (i = 0 ; i < 2; i++) {
        scanf("%d" , &num);
        soma += num;
    }

    media = soma / 2 ;

    printf("A media dos valore é %.2f\n" , media);

    return 0;
}

