#include <stdio.h>
#include <stdlib.h>

//Nome: Lucas Timponi Mercadante Castro.

/* ENUNCIADO DA ATIVIDADE:
CALCULAR A QUANTIDADE DE DIAS VIVIDOS – Crie uma aplicação console que solicite do usuário o ano de nascimento e o ano atual, baseado nestas duas informações exibida a quantidade de dias vividos até o momento, considere que cada ano contém 365 dias. */

int main( int argc, char *argv[])
{

//Declaracao:

int anonascimento, anoatual, idade, diasvividos;

//Entrada:

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &anonascimento);

    printf("Digite o ano atual: \n");
    scanf("%d", &anoatual);

//Processamento:

    idade = anoatual - anonascimento;

    diasvividos = idade * 365;

//Saida:

printf("Voce viveu aproximadamente %d dias.\n", diasvividos);

return 0;
}
