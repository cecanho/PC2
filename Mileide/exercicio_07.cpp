/*Exercício 7

Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valores lidos.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, maior, menor;
	maior = 0;
	menor = 30000;
	int num;
	int vetor[10]; 
	cout << "Exercício 07!" << endl;
	cout << "Verifica maior e menor número em 10 números digitados!" << endl << endl;

		cout << "Digite os números para verificar: " << endl;
			for (i=0; i<10; i++){
			cin >> num;
			vetor[i]  = num;
			}
		system ("cls");
		
		cout << "Números digitados: " << endl;
			for (i=0; i<10; i++){
			cout << vetor[i] << " ";
			}
			
	cout << endl;
	
	for (i=0; i<10; i++){
		if (vetor[i] > maior)
			maior = vetor[i];
		if (vetor[i] < menor)
			menor =  vetor[i];
	}
 	
	cout << "O menor número é: " << menor << endl;
	cout << "O maior número é: " << maior << endl;	
}


