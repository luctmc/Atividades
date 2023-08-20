#include <stdio.h>
#include <stdlib.h>

//Nome: Lucas Timponi Mercadante Castro.

/* ENUNCIADO DA ATIVIDADE:
DIVIDIR CONTA RESTAURANTE – Crie uma aplicação console que será responsável por calcular e exibir o valor que cada um dos 3 amigos que foram a um restaurante deverá pagar 
individualmente, a aplicação deverá solicitar o valor total da conta gasta pelos amigos, aplicar um acréscimo de 10% referente a taxa de serviço e então deverá dividir 
o resultado por 3 para exibir o valor individual que cada um terá que pagar..*/

int main( int argc, char *argv[]) 
{

// Declaracao:

    int numAmigos = 3;
    double valorTotal, valorComTaxa, valorPorAmigo;
    double taxaServico = 0.10; // 10%

// Entrada:

    printf("Digite o valor total da conta: ");
    scanf("%lf", &valorTotal);

// Processamento:

    // Calcular o valor com a taxa de serviço
    valorComTaxa = valorTotal * (1 + taxaServico);

    // Dividir o valor com taxa entre os amigos
    valorPorAmigo = valorComTaxa / numAmigos;

// Saida:

    printf("Cada amigo deve pagar: %.2lf\n", valorPorAmigo);

    return 0;
}
