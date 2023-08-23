#include <stdio.h>
#include <stdlib.h>

 //Nome: Lucas Timponi Mercadante Castro.

/* Exercicio basico de tarifa em um pedagio: */

int main(int argc, char *argv[]) {
	
	float vpedagio = 0.0;
	float saldo = 0.0;

	printf("Insira o valor do seu saldo:\n");
	scanf("%f", &saldo);
	printf("Insira o valor do pedagio:\n");
	scanf("%f", &vpedagio);
	
	if (vpedagio > saldo){
		printf("PASSAGEM BLOQUEADA! falta saldo em sua conta \n");
		printf("Saldo: %f\n", saldo);
	}
	else{
		printf("PASSAGEM LIBERADA!\n");
		printf("Saldo: %f\n", saldo);
		
		saldo = saldo - vpedagio;
		printf("\nSaldo final apos o pagamento: %f", saldo);
		
	}
	
	return 0;
}
