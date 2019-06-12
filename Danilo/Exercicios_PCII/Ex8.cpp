#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int num;
	int valores[10];
	int i = 0;
	int aux = 0;
	
	for (i = 0; i < 10; i++){
		cout << "Entre com um número inteiro: ";
		cin >> num;
		valores[i] = num;
	}
	
	system ("clear||cls");
	cout << "\nVetor Original: ";
	for (int a = 0; a < 10; a++){
		cout << valores[a] << " ";
	}
			
	for (int j = 0; j < 10; j++){
		for (int l = 0; l < 9; l++){
			if (valores[l] > valores[j]){
				aux = valores[l];
				valores[l] = valores[j];
				valores[j] = aux;
			}
		}
	}
	cout << "\nVetor Ordenado: ";
	for (int b = 0; b < 10; b++){
		cout << valores[b] << " ";
	}		
	
	return 0;
}