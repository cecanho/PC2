#include <iostream>
#include <stdlib.h>
#include <iomanip>
#define TAMMAX 20

using namespace std;

struct PROD{
	string nome;
	float preco;
};

void setProd(PROD produto[TAMMAX]){
	
	for (int i = 0; i < TAMMAX; i++){
		cout << "Entre com o nome do produto" << endl;
		getline(cin, produto[i].nome);
		cout << "Entre com o preço do produto" << endl;
		cin >> produto[i].preco;
		cin.ignore();
	}
}

float calculaInflacao(float preco){

	return preco += preco * 0.05;	
}

void ordenaProduto(PROD produto[TAMMAX]){
	
	PROD produtoOrdenado;
	
	for(int i = 0; i < TAMMAX; i++)
		for(int j = 0; j < TAMMAX - 1; j++)
			if(produto[j].nome[0] > produto[j+1].nome[0]){
				produtoOrdenado = produto[j];
				produto[j] = produto[j+1];
				produto[j+1] = produtoOrdenado;
			}
}

void printProd(PROD produto[TAMMAX]){
	
	for(int i = 0; i < TAMMAX; i++){
		cout << produto[i].nome << " - R$ ";
    	if(produto[i].preco < 100){
    		cout << fixed << setprecision(2);
			cout << calculaInflacao(produto[i].preco) << endl;
		}			
		else{
			cout << fixed << setprecision(2);
			cout << produto[i].preco << endl;
		}			
	}
}

int main(){
	
	PROD produto[TAMMAX];
	
	setProd(produto);
	system("cls||clear");
	ordenaProduto(produto);
	printProd(produto);
	
	return 0;
}