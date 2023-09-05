#include <stdio.h>
#include <string.h>

//Nome: Lucas Timponi Mercadante Castro.

/* ENUNCIADO DA ATIVIDADE:
O diagrama de fluxo abaixo corresponde a solução de um programa, estude o diagrama e descreva o enunciado do problema em detalhes.*/

int main() {
    int A, B;
    float M;

    printf("Digite o valor de A (entre 0 e 10): ");
    scanf("%d", &A);

    if (A < 0 || A > 10) {
        printf("Valor de A nao permitido. Programa encerrado.\n");
        return 0;
    }

    printf("Digite o valor de B (entre 0 e 10): ");
    scanf("%d", &B);

    if (B < 0 || B > 10) {
        printf("Valor de B nao permitido. Programa encerrado.\n");
        return 0;
    }

    M = (A + B) / 2.0;

    if (M > 6) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
