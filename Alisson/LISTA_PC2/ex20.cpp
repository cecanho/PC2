
#include <iostream>
#include <stdlib.h>
#define Max 6

using namespace std;

void inserir();


typedef struct {
	int nome;
	int idade;
}PESSOA;
typedef struct{
	PESSOA vetor[Max];
	int nElem;
}LISTA;

void criarLista(LISTA *lista){
	lista->nElem = 0;
}


PESSOA item;
PESSOA vetor[Max];

int nElem;

int preenche(){
	
	system("cls");
	cout << "Entre com o Nome: ";
	cin >> item.nome;
	
	cout << "\nEntre com a idade: ";
	cin >> item.idade;
	if(nElem < 1){
		nElem++;
		vetor[nElem] = item;
	}else{
		nElem++;
		vetor[nElem] = item; 
		inserir();	
	}
	
}

void imprime(){
	int i;
	system("cls");
	
	printf ("\t\tAGENDA ELETRONICA\t\t ");
	for(i=1;i<=nElem;i++)
		printf("\t\t\nPosicao %d = %d, idade = %d\t\t",i,vetor[i].nome, vetor[i].idade);
	cout << "\n";
	system("pause");
}

void inserir(){
	 int i,j;
	 PESSOA x, aux;
	 
	 for(i=2;i<nElem;i++){
	 	x = vetor[i];
	 	j = i - 1;
	 	vetor[0] = x;
	 	while(x.nome < vetor[j].nome){
	 		vetor[j + 1] = vetor[j];	 		 
	 		j--;
		 }
		 vetor[j + 1] = x;
	 }
	 cout << "\nVetor Ordenado\n";
}
int buscaNomePosicao(PESSOA *item, string nome){
	int i;
	PESSOA cl;
	
	for(i = 0;i < item->nElem;i++){
		cl = lista->vetor[i];
		if(nome.compare(cl.nome)==0)
			return i;
	}
	return -1;
}
int main() {
	nElem = 0;
	int op = 0;
	
	do{
		system("cls");
		cout << "Entre com um nome na agenda:";
		cout << "\n 2 - Imprimir"<< endl;
		cout << "\n Consulta"<<endl;
		cout << "\n 0 - Sair:\t"<<endl;
		cin >> op;
		
		switch(op){
			case 1 : preenche();
						break;
			case 2 : imprime();
						break;
			case 3 :
				cout << "\nNome: ";
				cin >> item.nome;
				pos = buscaNomePosicao(&lista, nome);
				if(pos != -1){
					cout << "\nEncontrado na posicao: " << pos;
				}else{
					cout << "\nNao encontrado!";
				}				
				system("pause");
				break;
		}
	}while(op != 0);
	
	return 0;
}
