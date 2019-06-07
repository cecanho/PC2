#include <iostream>
#include <stdio.h>
#include<stdlib.h>

/*9. Fazer uma rotina que recebe como parâmetro um array de 5 posições
contendo as notas de um aluno ao longo do ano e devolve a média do aluno. */

float calcula_media(float *notas){
	float media;
	
	media = (notas[1] + notas[2] + notas[3] + notas[4] + notas[5]) / 5;
	return media;
}

int main() {
	
	float notas[5];
	float nota_media;
	int x;
	
	for(x = 1; x<6; x++){
		printf("Qual a %dª nota? ", x);
		scanf("%f", &notas[x]);
	}	
		
	nota_media = calcula_media(notas);
	
	printf("\nA média é: %.2f\n", nota_media);

	return 0;
}
