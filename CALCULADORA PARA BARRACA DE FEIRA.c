#include <stdio.h>
#include <string.h>

//Nome: Lucas Timponi Mercadante Castro.

/* ENUNCIADO DA ATIVIDADE:
Crie um programa que deverá auxiliar o Sr. José a calcular o valor gasto por cada cliente em sua barraca de feira, ele vende apenas 3 produtos,
abacaxis (unidade), laranjas (em dúzias), mandioca (em quilos). Sempre que um cliente chega em sua barraca,
ele pergunta o quanto de cada um de seus produtos o cliente irá querer comprar, e os preços para cada item seguem a seguinte regra:

- ABACAXI = 01 unidade custa R$ 5.00, para compras de 03 ou mais unidades o preço é de R$ 4.00 por unidade.

- LARANJAS = 01 dúzia custa R$ 8.00, se o cliente levar 02 dúzias ou mais, o preço por dúzia é de R$ 6.00.

- MANDIOCA = 01 quilo custa R$ 4.00, caso o cliente leve 03 ou mais quilos, o preço por quilo é de R$ 3.00,
mas atenção neste item, pois os clientes podem comprar menos de 1 quilo, ou frações de quilos.

O programa que irá criar deverá apresentar no final do processamento: O preço total por cada item comprado e o valor total gasto pelo cliente.*/

int main() {
    int Abacaxis, Laranjas, Mandioca;
    float precoAbacaxi, precoLaranjas, precoMandioca, totalGasto;

    
    printf("Quantos abacaxis voce deseja comprar? ");
    scanf("%d", &Abacaxis);

    
    if (Abacaxis >= 3) {
        precoAbacaxi = Abacaxis * 4.00;
    } else {
        precoAbacaxi = Abacaxis * 5.00;
    }

    
    printf("Quantas dúzias de laranjas voce deseja comprar? ");
    scanf("%d", &Laranjas);

    
    if (Laranjas >= 2) {
        precoLaranjas = Laranjas * 6.00;
    } else {
        precoLaranjas = Laranjas * 8.00;
    }

    
    printf("Quantos quilos de mandioca voce deseja comprar? ");
    scanf("%d", &Mandioca);

    
    if (Mandioca >= 3) {
        precoMandioca = Mandioca * 3.00;
    } else {
        precoMandioca = Mandioca * 4.00;
    }

    
    totalGasto = precoAbacaxi + precoLaranjas + precoMandioca;

   
    printf("\nPreco dos abacaxis: R$ %.2f\n", precoAbacaxi);
    printf("Preco das laranjas: R$ %.2f\n", precoLaranjas);
    printf("Preco da mandioca: R$ %.2f\n", precoMandioca);
    printf("Valor total gasto: R$ %.2f\n", totalGasto);

    return 0;
}
