/*Exercício 8

Fazer um programa que lê um conjunto de 10 valores e os imprime ordenados

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, aux = 0;
	int num;
	int vetor[10]; 
	cout << "Ordena Números!" << endl << endl;
	
		cout << "Digite os números para ordenar: " << endl;
			for (i=0; i<10; i++){
			cin >> num;
			vetor[i]  = num;
			}
		system ("cls");
		
		cout << "Números digitados: " << endl;
			for (i=0; i<10; i++){
				cout << vetor[i] << " ";
			}
			
	cout << endl;
	//8
	for (j = 0; j<10; j++)
		for (i = 0; i < 10; i++){
			if (vetor[i] > vetor[i + 1]){
				aux = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = aux;
			}
		}
		
	cout << endl << "Números ordenados: " << endl << endl;	
	for (i = 0; i < 10; i++)
		cout << vetor[i] << endl;
 	
		
}


