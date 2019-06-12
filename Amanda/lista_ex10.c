#include <stdio.h>
#include <stdlib.h>
#define MAX 99

/* 10. Fazer uma rotina que recebe um array do tipo double e o número de valores que devem 
ser solicitados ao usuário e devolve o array preenchido com os valores digitados. */

int main() {
	int x,y;
	double array[MAX];
	
	printf("Quantos valores serão digitados?");
	scanf("%d", &x);
	
	for(y=0; y < x; y++){
		
		printf("Qual o %º valor? ");
		scanf("%d", &array[x]);
		x--;
	}
	
	
	
	return 0;
}
