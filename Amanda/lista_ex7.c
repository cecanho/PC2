#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//7. Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valores lidos.


int main() {
	int num;
	int x=0, maior = -999, menor = 10000;
	

	for(x=0 ; x<10 ; x++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		if(num > maior) maior = num;
		if(num < menor) menor = num;
	}

	
	printf("Digito: %d %d ", maior , menor);
	
	return 0;
}
