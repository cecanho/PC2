/*Exerc�cio 10

Fazer uma rotina que recebe um array do tipo double e o n�mero de valores que devem ser solicitados ao usu�rio e 
devolve o array preenchido com os valores digitados.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	double  num, vetor[5]; 
	int i;
	cout << "Exerc�cio 10!" << endl;
	cout << "Array de doubles!" << endl << endl;
	
		cout << "Digite os valores: " << endl;
			for (i=0; i<5; i++){
			cin >> num;
			vetor[i]  = num;
			}
		system ("cls");
		
		cout << "Valores digitados: " << endl;
			for (i=0; i<5; i++){
				cout << vetor[i] << " ";
			}
	
}


