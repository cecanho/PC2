/* 18. Construir um programa em "C" que implementa uma agenda eletrônica. 
O programa deve ter um menu com as seguintes opções:
- Entrar um novo nome na agenda.
- Imprimir na tela os dados de uma das pessoas cadastradas (conforme
solicitação).
- Imprimir a lista de nomes cadastrados que comecem pela letra indicada.
- Fim
Cada entrada da agenda deve ter os seguintes campos:
char nome[30];
char endereco[100];
char fone[10];
long int CEP;
Obs: a agenda deve ter capacidade para 100 entradas.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
	char nome[30];
	char endereco[100];
	char fone [10];
	long int CEP;
}DADOS;

typedef struct{
	DADOS vetor[MAX];
	int nElem;	
}AGENDA;

void inserir_contato(AGENDA *age, DADOS dad){
	age->vetor[age->nElem] = dad;
	age->nElem = age->nElem + 1;	
};

void buscaContatoNome(AGENDA *age, DADOS dad){
	int i;
	DADOS dad;
	
	for(i = 0;i < age->nElem;i++){
		dad = age->vetor[i];
		if(strcmp (key,buffer))==0)
			printf((void*)&age->vetor[i]);
		else
			printf("\nNao encontrei!");
	}
}; // (conforme solicitação Nome ).
void localizar_inicial();
void end();

int main() {
	int op = 100;
	DADOS dad; // variavel dados do tipo ESTRUTURA DADOS que contem membros: nome endereco fone cep
	AGENDA age;
	
	do{
		printf("AGENDA TELEFONICA\n");
		printf("\n(1) Inserir novo contato.");; 
		printf("\n(2) Buscar contato.");
		printf("\n(3) Localizar contato pela inicial do nome.");
		printf("\n(4) Fechar Agenda.");
		printf("\nDIGITE A OPCAO DESEJADA: ");
		scanf("%d", &op);
		
		
		
		switch(op){
			case 1:
				printf("\nNome do Contato: ");
				fflush(stdin);
				fgets(dad.nome,40,stdin);
				printf("Endereço: ");
				fflush(stdin);
				fgets(dad.endereco,40,stdin);
				printf("Telefone: ");
				fflush(stdin);
				fgets(dad.fone,40,stdin);
				printf("CEP: ");
				fflush(stdin);
				scanf("%ld", &age,dad);
				inserir_contato(&age,dad);
				system("pause");
				break;
			case 2:
				printf("Qual o nome do contato? ");
				fflush(stdin);
				fgets(dad.nome,40,stdin);
				buscaContatoNome(&age, dad);
				system("pause");
				break;
			case 3:
			break;
			case 4:
			break;			
		}
			
	} while(op!=0);
	
	return 0;
}
