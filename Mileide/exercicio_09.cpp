/*Exercício 9

Fazer uma rotina que recebe como parâmetro um array de 5 posições contendo as notas de um aluno ao longo do ano e devolve a média do aluno.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num;
	float nota = 0;
	int vetor[5]; 
	cout << "Média!" << endl << endl;
	
		cout << "Digite as notas: " << endl;
			for (i=0; i<5; i++){
			cin >> num;
			vetor[i]  = num;
			nota = nota + vetor[i];
			}
		system ("cls");
		
		cout << "Notas digitadas: " << endl;
			for (i=0; i<5; i++){
				cout << vetor[i] << " ";
			}
			
	cout << endl;
	
	cout << "Média das notas: " << nota/5;
		
}


