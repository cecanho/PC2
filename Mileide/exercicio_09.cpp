/*Exerc�cio 9

Fazer uma rotina que recebe como par�metro um array de 5 posi��es contendo as notas de um aluno ao longo do ano e devolve a m�dia do aluno.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num;
	float nota = 0;
	int vetor[5]; 
	cout << "M�dia!" << endl << endl;
	
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
	
	cout << "M�dia das notas: " << nota/5;
		
}


