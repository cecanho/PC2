#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/* 11. Fazer um programa em "C" que l� um conjunto de 10 valores inteiros e 
verifica se algum dos valores � igual a m�dia dos mesmos. */

using namespace std;

int main(){
	int num, vector[10]; 
	int i;
	float media;
	
	cout << "Digite 10 valores inteiros:  " << endl;
		for (i=0; i<10; i++){
		cin >> num;
		vector[i]  = num;
		media = media + vector[i];
		}
	system ("cls");
		
	media = media /10; 
	cout << "A media dos valores digitados �: " << media << endl;
	
	for (i=0; i<10;i++){
		if (vector[i] == media)
		cout << "A posicao numero " << i << " do vetor tem o mesmo valor que a media dos valores digitados!" << endl;
	}
}

