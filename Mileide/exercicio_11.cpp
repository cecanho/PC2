/*Exercício 11

Fazer um programa em "C" que lê um conjunto de 10 valores inteiros e verifica se algum dos valores é igual a média dos mesmos.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, vetor[10]; 
	int i;
	float media;
	
	cout << "Exercício 11!" << endl;
	cout << "Verifica se algum valor é igual a média dos valores!" << endl << endl;
	
		cout << "Digite os valores: " << endl;
			for (i=0; i<10; i++){
			cin >> num;
			vetor[i]  = num;
			media = media + vetor[i];
			}
		system ("cls");
		
		media = media /10; 
			cout << "Média: " << media << endl;
		for (i=0; i<10;i++){
			if (vetor[i] == media)
				cout << "Número da posição: " << i << " é igual a média!" << endl;
		}
}


