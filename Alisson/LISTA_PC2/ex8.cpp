
#include <iostream>
#include <stdlib.h>
#define Max 6

using namespace std;

void insereOrdenadoCrescenteID();


struct Item{
	int valor;
	
};



struct Item item;

struct Item vetor[Max];


int nElem;


int preenche(){
	
	
	
	system("cls");
	cout << "\nEntre com um valor: ";
	cin >> item.valor;
	
	if(nElem < 1){
		nElem++;
		vetor[nElem] = item;
	}else{
		nElem++;
		vetor[nElem] = item; 
		insereOrdenadoCrescenteID();	
	}
	
}


void imprime(){
	int i;
		
	system("cls");
	
	for(i=1;i<=nElem;i++)
		printf("\n Posição= %d Valor = %d",i,vetor[i].valor);
	cout << "\n";
	
	system("pause");
}


void insereOrdenadoCrescenteID(){
	
	 int i,j;
	 
	 struct Item x, aux;
	 
	 
	 for(i=2;i<nElem;i++){
	 
	 	x = vetor[i];
	 
	 	j = i - 1;
	 	
	 	vetor[0] = x;
		 
	 	while(x.valor < vetor[j].valor){
	 		
	 		vetor[j + 1] = vetor[j];	 		 
	 		
	 		j--;
		 }
		 
		 vetor[j + 1] = x;
	 }
	 cout << "\nVetor Ordenado\n";
}

int main() {
	nElem = 0;

	int op = 0;
	

	do{
		
		system("cls");
		cout << "Escolha:\n 1 - Inserir em ordem crescente";
		cout << "\n 2 - Imprimir";
		cout << "\n 0 - Sair:\t";
		cin >> op;
		
		
		switch(op){
			
			case 1 : preenche();
						break;
			case 2 : imprime();
						break;
		}
		
	}while(op != 0);
	
	return 0;
}
