#include <iostream>

using namespace std;

void criarVetor(int qtd){
    int vetor[qtd];
    for (int i = 0; i < qtd; i++){
        cout << "Entre com o valor da posicao " << i << " do vetor." << endl;
        cin >> vetor[i];
    };
    int *pVetor = vetor;
    cout << "Valores do vetor:" << endl;
    for (int j = 0; j < qtd; j++){
        cout << "Posicao: " << j << " | " << " Valor: " << vetor[j] << endl;
    } 
}

int main() {
    int qtdElem;
    cout << "Qual o tamanho do vetor?" << endl;
	cin >> qtdElem;
    system("cls||clear");
    criarVetor(qtdElem);
    return 0;
}
