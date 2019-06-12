#include <iostream>
#include <stdlib.h>

using namespace std;

double mediaValorVetor(double numeros[10]){
	
	double media = 0;
	media = (numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4] + 
			 numeros[5] + numeros[6] + numeros[7] + numeros[8] + numeros[9]) / 10;
    return media;
}

int main (){
	
	double numeros[10];
	double media = 0;
	
	for (int i = 0; i < 10; i++){
		cout << "Entre com um valor inteiro: ";
		cin >> numeros[i];
	}
	
	media = mediaValorVetor(numeros);
	
	for (int j = 0; j < 10; j++){
		if (numeros[j] == media)
			cout << "Valor na posição " << j << ", é igual ao valor da média: " << media << endl;
	}
	cout << "\nNão foi encontrado nenhum valor no vetor igual ao valor da média!" << endl;
	
	return 0;
}