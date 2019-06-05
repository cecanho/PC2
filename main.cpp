#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct registro{
    int chave;
    struct registro *esq;
    struct registro *dir;
}no;

no *novoNo(){
    no *novo;

    //preparando o espaço para receber novo item
    novo = (no *)malloc(sizeof(no));

    cout << "\nEntre com um número: ";
    cin >> novo->chave;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

no *insereNovo(no *raiz, no *novo){
    if(raiz==NULL){
        raiz = novo;
    }else{
        if(novo->chave > raiz->chave){
            raiz->dir = insereNovo(raiz->dir, novo);
        }else if(novo->chave <= raiz->chave){
            raiz->esq = insereNovo(raiz->esq, novo);
        }
    }
    return raiz;
}

void inOrder(no *raiz){
    if(raiz!=NULL){
        inOrder(raiz->esq);
        cout << "\t" << raiz->chave;
        inOrder(raiz->dir);
    }
}

void preOrder(no *raiz){
    if(raiz!=NULL){
        cout << "\t" << raiz->chave;
        preOrder(raiz->esq);
        preOrder(raiz->dir);
    }
}

void posOrder(no *raiz){
    if(raiz!=NULL){
        posOrder(raiz->esq);
        posOrder(raiz->dir);
        cout << "\t" << raiz->chave;
    }
}

int main()
{
    no *novo, *raiz;
    raiz = NULL;
    int i;

    for(i=0;i<9;i++){
        novo = novoNo();
        raiz = insereNovo(raiz,novo);
    }

    cout << "\nPercorrer preOrder = > ";
    preOrder(raiz);

    cout << "\nPercorrer inOrder = > ";
    inOrder(raiz);

    cout << "\nPercorrer posOrder = > ";
    posOrder(raiz);

    return 0;
}
