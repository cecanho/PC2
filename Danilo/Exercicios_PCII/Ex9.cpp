#include <iostream>

using namespace std;

double Media(double notas[5]){
	
	double media = 0;
	media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;
	return media;
}

int main (){
	
	double notas[5];
	double nota;
	
	for (int i = 0; i < 5; i++){
		cout << "Entre com a nota do aluno: ";
		cin >> nota;
		notas[i] = nota;
	}
	double media = Media(notas);
	cout << "Média do aluno: " << media << endl;
	
	return 0;
}