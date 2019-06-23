    
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#define MAX 1

using namespace std;

typedef struct PROD{
	char nome[80];
	float preco;
	} PROD;
	
//struct PROD prod[];
void cadProdu(PROD prod[]);

void cadProdu(PROD prod[]){
	
	for (int i = 0; i < MAX; i++){
		cout << "Nome do Produto:" << endl;
		cin >> prod[i].nome;
		cout << "Preco do produto: " << endl;
		cin >> prod[i].preco;
	}
	
}

float Inflacionar(float preco){
	return preco += preco * 0.05;
}

void ordenaProd(PROD prod[]){
	int i, j;
	
	PROD aux;
	
	for (i=0; i < MAX; i++){
		for (j=0; j < (MAX - 1); j++){
			if (prod[j].nome[0] > prod[j + 1].nome[0]){
				aux = prod[j+1];
				prod[j+1] = prod[j];
				prod[j] = aux;
			}
		}
	}
}

void atualizaInfla(PROD prod[]){
	int i;
	for (i = 0; i < MAX; i++){
		if (prod[i].preco < 100)
		prod[i].preco+=(prod[i].preco * 0.05);
	}
}
void imprimir (PROD prod[]){
	int i;
	/*chamada de funções do DOS system("cls"), então só funciona no Windows
	Limpa Tela */	
	system("cls");
	/*Tem que ser Max+1 para ir até o último elemento*/
	for(i=0 ;i < MAX;i++){
	
		cout << " " << i + 1 << " nome: "<< prod[i].nome << "\npreco: " << prod[i].preco << endl;
}
	cout << "\n" << endl;
} 
int main() {
  PROD prod [MAX];

  system("clear");
  printf("\n\n\tPRODUTOS\n\n");

 	cadProdu(prod);
	ordenaProd(prod);
 	atualizaInfla(prod);
  	imprimir (prod);

   return 0;
}



