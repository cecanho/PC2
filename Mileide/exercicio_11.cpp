/*Exerc�cio 11

Fazer um programa em "C" que l� um conjunto de 10 valores inteiros e verifica se algum dos valores � igual a m�dia dos mesmos.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, vetor[10]; 
	int i;
	float media;
	
	cout << "Exerc�cio 11!" << endl;
	cout << "Verifica se algum valor � igual a m�dia dos valores!" << endl << endl;
	
		cout << "Digite os valores: " << endl;
			for (i=0; i<10; i++){
			cin >> num;
			vetor[i]  = num;
			media = media + vetor[i];
			}
		system ("cls");
		
		media = media /10; 
			cout << "M�dia: " << media << endl;
		for (i=0; i<10;i++){
			if (vetor[i] == media)
				cout << "N�mero da posi��o: " << i << " � igual a m�dia!" << endl;
		}
}


