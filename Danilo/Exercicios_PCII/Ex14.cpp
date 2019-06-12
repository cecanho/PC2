#include <iostream>
#include <stdlib.h>

using namespace std;

double Operacoes(char esc, double v1, double v2){
	
	double result = 0;
	
	switch(esc){
		case 'a':
			result = v1+v2;
			break;
		case 'A':
			result = v1+v2;
			break;
		case 's':
			result = v1-v2;
			break;
		case 'S':
			result = v1-v2;
			break;
		case 'm':
			result = v1*v2;
			break;
		case 'M':
			result = v1*v2;
			break;
		default:
			cout << "Caractere não corresponde a nenhuma opção!" << endl;
	}
	
	return result;
}

int main (){
	
	char esc;
	double valor1, valor2, result;
	
	do{
		cout << "Entre com dois valores" << endl;
		cin >> valor1;
		cin >> valor2;
		system ("cls||clear");
		cout << "Escolha a letra de acordo com as operações" << endl;
		cout << "A - Adição" << endl;
		cout << "S - Subtração" << endl;
		cout << "M - Multiplicação" << endl;
		cout << "Aperte Q para sair" << endl;
		cin >> esc;
		
		result = Operacoes(esc, valor1, valor2);
		cout << "Resultado: " << result << endl;
		
	}
	while (esc != 'Q' || esc != 'q');	   	
	
	return 0;
}