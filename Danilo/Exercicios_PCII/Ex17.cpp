#include <iostream>
#define TAMVETOR 3

using namespace std;

void notasAluno(){
	
	double notas[TAMVETOR];
	
	for(int i = 0; i < TAMVETOR; i++){
		cout << "Entre com a nota do aluno: ";
		cin >> notas[i];
	}
	
	cout << "Notas do aluno: ";
	for (int i = 0; i < TAMVETOR; i++)
		cout << notas[i] << "  ";
}

int main (){
	
	notasAluno();
	return 0;
}
