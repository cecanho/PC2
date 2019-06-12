#include <iostream>
#include <stdlib.h>

using namespace std;

void arrayPreenchido(int qtd){
	
	double numeros[qtd];
	
	for (int i = 0; i < qtd; i++){
		cout << "Entre com um número inteiro: ";
		cin >> numeros[i];
	}
	
	system("cls||clear");
	cout << "\nValores do array: ";
	for (int j = 0; j < qtd; j++)
		cout << numeros[j] << " ";
} 

int main (){
	
	int numElem;
	
	cout << "Entre com o tamanho do vetor: ";
	cin >> numElem;
	
	system("cls||clear");
	arrayPreenchido(numElem);
	cout << endl;
	
	return 0;
}