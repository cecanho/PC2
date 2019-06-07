#include <stdio.h>
#include <stdlib.h>

/* 8. Fazer um programa que lê um conjunto de 10 valores e os imprime ordenados. */

void ordena(int *num){ //colocando em ordem crescente
    int x, j, temp;
	 
    for (x=0;x<9; x++){
    	
        for(j=x+1;j<10;j++){
        	
            if (num[x]>num[j]){ // se a posicao anterior for maior que a proxima
                temp=num[x]; // posicao anterior fica em temp
                num[x]=num[j]; // posicao anterior é substituida pela prox
                num[j]=temp; // posicao proxima recebe o que estava em temp, ou seja invertemos as posicoes
            } 
        } 
    } 
}

int main() {
	
	int num[10];
	int x;
	
	for(x=0; x<10; x++){
		printf("Digite um numero: ");
		scanf("%d", &num[x]);
	}
	
	ordena(num);
	
	printf("ORDEM CRESCENTE:\n ");	
	for(x=0; x<10 ; x++){
		printf("Posicao %d: %d\n ", x, num[x] );
	}
	
	return 0;
}
