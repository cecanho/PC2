#include <iostream>

using namespace std;

void MaiorMenorEMedia(int numeros[], int tamVetor){
	
	int soma = 0;
	
	for (int i = 0; i < tamVetor; i++){
		cout << "Entre com um n�mero inteiro" << endl;
		cin >> numeros[i];
		soma += numeros[i];
	}
	
	double media = soma/tamVetor;
	
	cout << "M�dia dos valores do vetor: " << media;
}

int main(){
	
	int numeros[] = {};
	int qtd;
	
	cout << "Entre com um vetor de n�meros inteiros" << endl;
	cout << "Quantos n�meros ser�o armazenados: ";
	cin >> qtd;
	
	MaiorMenorEMedia(numeros, qtd); 
	
	return 0;
}