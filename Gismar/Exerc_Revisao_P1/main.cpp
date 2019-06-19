#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Uma estrutura de dados por mais que seja definida pelo
usuário, ela sempre deve ter as características da forma
utilizada.

Neste caso é uma lista encadeada (dinâmica) e assim ela 
sempre terá:
- um nome para a estrutura
- um dado para armazenar
- no mínimo um ponteiro que aponta para o próximo item da lista
- se não tem próximo item, o ponteiro aponta para nulo

Após a criação da estrutura é necessário criar ponteiros que 
apontam para a lista.

Abaixo temos um tipo de estrura nomeada como NO. A estrutura
é composta por três elementos:
1 - um id do tipo inteiro.
2 - uma idade do tipo inteiro.
3 - um ponteiro para o próximo item.

Logo após fechar a estrutura são criados dois ponteiros
que vão apontar para uma variável deste tipo que está
armazenada em memória com auxilio de malloc. Estes dois
ponteiros devem ser inicializados com NULL e são globais,
o que dispensa o endereçamento via funções.
*/

struct NO{
	int id;
	int idade;
	struct NO *prox;
}*primeiro = NULL, *ultimo = NULL;

/*
A função insereNaPrimeiraPosicao desloca o ponteiro
'primeiro' para o ponteiro novo. Caso seja o primeiro item,
então o ponteiro 'ultimo' também recebe o novo item alocado.
Na próxima inserção, primeiro e último serão diferentes.
*/
void insereNaPrimeiraPosica(){
	struct NO *novo;
	
	if(primeiro==NULL){
		/*
		a função malloc reserva (aloca) uma posição de
		memória do tamanho (escopo) da variável que vem
		no parser (struct NO*), para isso ela precisa
		saber o tamanho desta variável (sizeof(struct NO)).
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
Como sabemos quem é o último item pelo ponteiro
'ultimo', basta algumas verificações e trocas
de posições.
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
Para remover no início, ou no fim existe a necessidade
de criar um ponteiro temporário (temp) para guardar a
posição de memória a ser liberada (free(temp)). Assim que fechar a 
função, temp some junto. Verifica se a lista esta vazia, se tem somente 
um item, ou mais, caso a segunda e terceira opção sejam verdadeiras
faz-se a troca de posições e atualiza o ponteiro primeiro e talvez
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
A diferença desta operação em relação a outra é que aqui
depois das verificações de lista vazia, ou de um único item
é necessário navegar pela lista até encontrar o final da lista.

Precisamo de duas variáveis:
1- temp armazena a varável que vamos liberar da memória.
2- temp1 armazena a variável anterior a temp e esta será
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
As verificações de lista vazia fica mais fácil com 
esta função
*/
int verifica(){
	if(primeiro==NULL)
		return 0;
	return 1;
}

/*
Rode o programa e responda as questões:
1- Que mensagem ele mostrou?
2- Por que ele não imprimiu o id 1?
3- Explique o funcionamento de cada função com suas palavras.
4- Qual o comportamento da função malloc?
5- Explique a rotina de main.

Este exercício será entregue no final do semestre junto com
a lista de exercícios.
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
	 cout << "\nOops, temos alguém na lista.\n";
	
	removeNoInicio(); 
	
	insereNoFinal();
	cout << "\nPrimeira Idade: " << primeiro->id;
	cout << "\nPrimeiro ID: " << primeiro->idade;
	cout << "\nUltima Idade: " << ultimo->id;
	cout << "\nUltimo ID: " << ultimo->idade;
	return 0;
}
