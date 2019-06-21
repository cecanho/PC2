#include <iostream>
#include <stdlib.h>
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

void printProd(PROD produto[TAMMAX]){
		
	for (int i = 0; i < TAMMAX; i++){
		cout << produto[i].nome << " - R$ ";
		if(produto[i].preco < 100)
			cout << calculaInflacao(produto[i].preco) << endl;
		else
			cout << produto[i].preco << endl;
	}
}

int main(){
	
	PROD produto[TAMMAX];
	
	setProd(produto);
	system("cls||clear");
	printProd(produto);
	
	return 0;
}