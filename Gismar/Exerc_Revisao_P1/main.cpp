#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Uma estrutura de dados por mais que seja definida pelo
usu�rio, ela sempre deve ter as caracter�sticas da forma
utilizada.

Neste caso � uma lista encadeada (din�mica) e assim ela 
sempre ter�:
- um nome para a estrutura
- um dado para armazenar
- no m�nimo um ponteiro que aponta para o pr�ximo item da lista
- se n�o tem pr�ximo item, o ponteiro aponta para nulo

Ap�s a cria��o da estrutura � necess�rio criar ponteiros que 
apontam para a lista.

Abaixo temos um tipo de estrura nomeada como NO. A estrutura
� composta por tr�s elementos:
1 - um id do tipo inteiro.
2 - uma idade do tipo inteiro.
3 - um ponteiro para o pr�ximo item.

Logo ap�s fechar a estrutura s�o criados dois ponteiros
que v�o apontar para uma vari�vel deste tipo que est�
armazenada em mem�ria com auxilio de malloc. Estes dois
ponteiros devem ser inicializados com NULL e s�o globais,
o que dispensa o endere�amento via fun��es.
*/

struct NO{
	int id;
	int idade;
	struct NO *prox;
}*primeiro = NULL, *ultimo = NULL;

/*
A fun��o insereNaPrimeiraPosicao desloca o ponteiro
'primeiro' para o ponteiro novo. Caso seja o primeiro item,
ent�o o ponteiro 'ultimo' tamb�m recebe o novo item alocado.
Na pr�xima inser��o, primeiro e �ltimo ser�o diferentes.
*/
void insereNaPrimeiraPosica(){
	struct NO *novo;
	
	if(primeiro==NULL){
		/*
		a fun��o malloc reserva (aloca) uma posi��o de
		mem�ria do tamanho (escopo) da vari�vel que vem
		no parser (struct NO*), para isso ela precisa
		saber o tamanho desta vari�vel (sizeof(struct NO)).
		*/
		novo = (struct NO*) malloc(sizeof(struct NO));
		novo->id = 1;
		novo->idade=19;
		novo->prox = NULL;
		primeiro = novo;
		ultimo = novo;
	}else{
		novo = (struct NO*) malloc(sizeof(struct NO));
		novo->id = primeiro->id++;
		novo->idade=19;
		novo->prox = primeiro;
		primeiro = novo;
	}
}

/*
Como sabemos quem � o �ltimo item pelo ponteiro
'ultimo', basta algumas verifica��es e trocas
de posi��es.
*/
void insereNoFinal(){
	struct NO *novo;
	
	if(primeiro==NULL){
		novo = (struct NO*) malloc(sizeof(struct NO));
		novo->id = 3;
		novo->idade=30;
		novo->prox = NULL;
		primeiro = novo;
		ultimo = novo;
	}else{
		novo = (struct NO*) malloc(sizeof(struct NO));
		novo->id = 3;
		novo->idade = 30;
		novo->prox = NULL;
		ultimo->prox = novo;
		ultimo = novo;		
	}
}

/*
Para remover no in�cio, ou no fim existe a necessidade
de criar um ponteiro tempor�rio (temp) para guardar a
posi��o de mem�ria a ser liberada (free(temp)). Assim que fechar a 
fun��o, temp some junto. Verifica se a lista esta vazia, se tem somente 
um item, ou mais, caso a segunda e terceira op��o sejam verdadeiras
faz-se a troca de posi��es e atualiza o ponteiro primeiro e talvez
o ultimo.
*/
void removeNoInicio(){
	struct NO *temp;
	if(primeiro==NULL){
		cout << "Lista vazia";
	}else if(primeiro->prox==NULL){
		temp = primeiro;		
		primeiro = temp->prox;
		ultimo = primeiro;
		free(temp);
	}else{		
		temp = primeiro;		
		primeiro = temp->prox;
		free(temp);
	}
}

/*
A diferen�a desta opera��o em rela��o a outra � que aqui
depois das verifica��es de lista vazia, ou de um �nico item
� necess�rio navegar pela lista at� encontrar o final da lista.

Precisamo de duas vari�veis:
1- temp armazena a var�vel que vamos liberar da mem�ria.
2- temp1 armazena a vari�vel anterior a temp e esta ser�
aponta pelo ponteiro 'ultimo'.
*/
void removeNoFinal(){
	struct NO *temp, *temp1;
	
	if(primeiro==NULL){
		cout << "Lista vazia";
	}else if(primeiro->prox==NULL){
		temp = primeiro;		
		primeiro = temp->prox;
		ultimo = primeiro;
		free(temp);
	}else{		
		temp = primeiro;
		
		while(temp->prox!=NULL){
			temp1 = temp;
			temp = temp->prox;
		}
		ultimo = temp1;
		ultimo->prox = NULL;
		temp1 = NULL;
		free(temp);
	}
}
/*
As verifica��es de lista vazia fica mais f�cil com 
esta fun��o
*/
int verifica(){
	if(primeiro==NULL)
		return 0;
	return 1;
}

/*
Rode o programa e responda as quest�es:
1- Que mensagem ele mostrou?
2- Por que ele n�o imprimiu o id 1?
3- Explique o funcionamento de cada fun��o com suas palavras.
4- Qual o comportamento da fun��o malloc?
5- Explique a rotina de main.

Este exerc�cio ser� entregue no final do semestre junto com
a lista de exerc�cios.
*/
int main() {
	
	if(verifica()==0)
		cout << "Vazia\n";
		
	insereNaPrimeiraPosica();
	insereNaPrimeiraPosica();	
	cout << "Primeiro ID: " << primeiro->id;
	cout << "\nPrimeira Idade: " << primeiro->idade;
	
	if(verifica()==0)
		cout << "Vazia\n";
	else
	 cout << "\nOops, temos algu�m na lista.\n";
	
	removeNoInicio(); 
	
	insereNoFinal();
	cout << "\nPrimeira Idade: " << primeiro->id;
	cout << "\nPrimeiro ID: " << primeiro->idade;
	cout << "\nUltima Idade: " << ultimo->id;
	cout << "\nUltimo ID: " << ultimo->idade;
	return 0;
}
