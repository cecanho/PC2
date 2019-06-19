#include <iostream>

using namespace std;

void MaiorMenorEMedia(int numeros[], int tamVetor){
	
	int soma = 0;
	
	for (int i = 0; i < tamVetor; i++){
		cout << "Entre com um número inteiro" << endl;
		cin >> numeros[i];
		soma += numeros[i];
	}
	
	double media = soma/tamVetor;
	
	cout << "Média dos valores do vetor: " << media;
}

int main(){
	
	int numeros[] = {};
	int qtd;
	
	cout << "Entre com um vetor de números inteiros" << endl;
	cout << "Quantos números serão armazenados: ";
	cin >> qtd;
	
	MaiorMenorEMedia(numeros, qtd); 
	
	return 0;
}