#include <iostream>
#include <stdlib.h>
#include <iomanip>
#define TAM 20
#define INFLA 0.05

using namespace std;

struct PROD{
	string nome;
	float preco;
};

void setProd(PROD produto[TAM]){
	
	for (int i = 0; i < TAM; i++){
		cout << "Entre com o nome do produto" << endl;
		getline(cin, produto[i].nome);
		cout << "Entre com o preco do produto" << endl;
		cin >> produto[i].preco;
		cin.ignore();
	}
}

float calculaInflacao(float preco){

	return preco += preco * INFLA;	
}

void ordenaProduto(PROD produto[TAM]){
	PROD produtoOrdenado;
	for(int i = 0; i < TAM; i++)
		for(int j = 0; j < TAM - 1; j++)
			if(produto[j].nome[0] > produto[j+1].nome[0]){
				produtoOrdenado = produto[j];
				produto[j] = produto[j+1];
				produto[j+1] = produtoOrdenado;
			}
}

void printProd(PROD produto[TAM]){
	
	for(int i = 0; i < TAM; i++){
		cout << produto[i].nome << " - R$ ";
    	if(produto[i].preco < 100){
    		cout << fixed << setprecision(4);
			cout << calculaInflacao(produto[i].preco) << endl;
		}			
		else{
			cout << fixed << setprecision(4);
			cout << produto[i].preco << endl;
		}			
	}
}

int main(){
	PROD produto[TAM];
	setProd(produto);
	system("cls");
	ordenaProduto(produto);
	printProd(produto);
	
	return 0;
}