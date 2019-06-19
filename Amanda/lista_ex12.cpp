#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/* 12. Fazer um programa que lê valores para uma matriz do tipo "float"de 5 linhas por 3 colunas 
e imprime a diferença entre a média dos elementos das colunas pares e a média dos elementos das linhas ímpares.. */


using namespace std;
 
int main() {
	float valores[5][3];
	int i, j, soma;
 
	for(i = 0; i < 5; i++) {
	    for(j = 0; j < 3; j++){
			cout << "Informe os valores de " << i + 1 << "," << j + 1 << endl;
			cin >> valores[i][j];
		}
	}
	for(i = 0; i < 5; i++) {                     
	    for(j = 0; j < 3; j++) {
			cout << valores[i][j];
		}
		cout << endl;
	}
	for(i = 0; i < 5; i++) {
		soma = 0;
	    for(j = 0; j < 3; j++){
	 		soma += valores[i][j];
	 	}
 		cout << "Soma da linha " << i + 1 << ": " << soma << endl;
	}
	for(i = 0; i < 3; i++) {
		soma = 0;
	    for(j = 0; j < 5; j++){
	 		soma += valores[j][i];
	 	}
 		cout << "Soma da coluna " << i + 1 << ": " << soma << endl;
	}
}
