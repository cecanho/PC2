#include <iostream>

using namespace std;

void notasAluno(){
	
	double notas[3];
	
	cout << "Entre com a primeira nota do aluno: ";
	cin >> notas[0];
	cout << "Entre com a segunda nota do aluno: ";
	cin >> notas[1];
	cout << "Entre com a terceira nota do aluno: ";
	cin >> notas[2];
	
	cout "Notas do aluno: ";
	for (int i = 0; i < 3; i++)
		cout << notas[i] << "  ";
}

int main (){
	
	notasAluno();
	return 0;
}