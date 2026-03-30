//
// Created by jesse on 30/03/2026.
//

#include <stdio.h>
#include <math.h>

int main() {
    int tempo, largura, comprimento, area;

    scanf("%d", &largura);
    scanf("%d", &comprimento);

    //TODO: Calcular a área do local e o tempo que o robo levará para limpá-lo.
    area = largura * comprimento;
    tempo = (area + 4) / 5;

    printf("O robô de limpeza levará %d tempo minuto para limpara a sala", tempo);


    return 0;
}
