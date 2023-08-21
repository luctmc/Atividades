#include <stdio.h>
#include <stdlib.h>

//Nome: Lucas Timponi Mercadante Castro.

/* ENUNCIADO DA ATIVIDADE:
CUSTO VIAGEM (LITROS E VALOR) – Parte 01: Crie uma aplicação console que solicita do usuário a distância que será percorrida, o preço por litro de combustível 
(tanto faz o tipo de combustível) e a quilometragem que o veículo faz por litro de combustível (distância percorrida com 1 litro), 
com essas informações calcule e exiba a quantidade de litros que será necessária para percorrer a distância informada e o custo em litros.
*/

int main( int argc, char *argv[]) 
{

// Declaracao:

double distancia, precoLitro, kmPorLitro, litrosNecessarios, custoEmLitros;

// Entrada:

    // Solicitar informações:
    printf("Digite a distancia a ser percorrida (em km): ");
    scanf("%lf", &distancia);

    printf("Digite o preco por litro de combustivel: ");
    scanf("%lf", &precoLitro);

    printf("Digite a quilometragem por litro do veiculo: ");
    scanf("%lf", &kmPorLitro);

// Processamento:

    // Calcular a quantidade de litros:
    litrosNecessarios = distancia / kmPorLitro;

    // Calcular o custo em litros:
    custoEmLitros = litrosNecessarios * precoLitro;

// Saida:

    // Exibir os resultados:
    printf("Quantidade de litros necessarios: %.2lf\n", litrosNecessarios);
    printf("Custo em litros: %.2lf\n", custoEmLitros);

    return 0;
}