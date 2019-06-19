#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/* 14. Fazer uma função que retorna a soma, a diferença e o produto entre dois números.*/


using namespace std;

float adicao_subtracao_multiplicacao(float num1, float num2, int op);

int main() {
	float num1, num2;
	
	cout << "**** CALCULADORA ****" << endl;
	cout << "- Digite dois valores e a calculadora retornara a soma, a diferenca e o produto entre dois numeros -" << endl;
	cout << "Entre com o primeiro numero: " << endl;
	cin >> num1;

	cout << "Entre com o segundo numero: " << endl;
	cin >> num2;
  
	cout << "A soma, subtracao e multiplicacao entre " << num1 << " e " << num2 << endl;
	
	for (int i = 0; i < 3; i++) {
		if (i == 0)
			cout << "Soma = " << adicao_subtracao_multiplicacao(num1, num2, i) << endl;
	    if (i == 1)
			cout << "Subtracao = " << adicao_subtracao_multiplicacao(num1, num2, i) << endl;
	    if (i == 2)
			cout << "Multiplicao = " << adicao_subtracao_multiplicacao(num1, num2, i) << endl;
	}

	cout << endl;
	return 0;
}

float adicao_subtracao_multiplicacao(float num1, float num2, int op) {
	float resultado;
	
	if (op == 0)
	return resultado = num1 + num2;
	
	if (op == 1)
	return resultado = num1 - num2;
  	
	if (op == 2)
    return resultado = num1 * num2;
}
