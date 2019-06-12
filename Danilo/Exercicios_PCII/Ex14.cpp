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
			cout << "Caractere n�o corresponde a nenhuma op��o!" << endl;
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
		cout << "Escolha a letra de acordo com as opera��es" << endl;
		cout << "A - Adi��o" << endl;
		cout << "S - Subtra��o" << endl;
		cout << "M - Multiplica��o" << endl;
		cout << "Aperte Q para sair" << endl;
		cin >> esc;
		
		result = Operacoes(esc, valor1, valor2);
		cout << "Resultado: " << result << endl;
		
	}
	while (esc != 'Q' || esc != 'q');	   	
	
	return 0;
}