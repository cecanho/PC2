#include <iostream>

using namespace std;

int main(){

    int vetor[10];
    double media=0, menor=0, maior=0;

    for (int i = 0; i < 10; i++){
        cout << "Entre com o valor da " << i << " posicao." << endl;
        cin >> vetor[i];
    }
    
    for (int j = 0; j < 10; j++){
        media += vetor[j];
    }
    media /= 10;
    
    cout << "A media dos valores do vetor e: " << media << endl;

    for (int k = 0; k < 8; k++){
        if (vetor[k] > vetor[k+1]){
            menor = vetor[k+1];
        }
    }

    cout << "O menor valor do vetor desconsiderando a ultima posicao e: " << menor << endl;

	maior = vetor[0];
    for (int l = 0; l < 10; l++){
		if (maior < vetor[l]){
			maior = vetor[l];
		}
    }
    
    cout << "O maior valor dos valores do vetor e: " << maior << endl;
    return 0;
}
