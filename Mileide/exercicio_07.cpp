/*Exerc�cio 7

Fazer um programa em "C" que l� 10 valores e imprime o maior e o menor valores lidos.

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
	cout << "Exerc�cio 07!" << endl;
	cout << "Verifica maior e menor n�mero em 10 n�meros digitados!" << endl << endl;

		cout << "Digite os n�meros para verificar: " << endl;
			for (i=0; i<10; i++){
			cin >> num;
			vetor[i]  = num;
			}
		system ("cls");
		
		cout << "N�meros digitados: " << endl;
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
 	
	cout << "O menor n�mero �: " << menor << endl;
	cout << "O maior n�mero �: " << maior << endl;	
}


