#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/* 15. Fazer uma fun��o em "C" que retorna a raz�o entre dois n�meros. 
A fun��o deve retornar pelo comando return o valor 1 se a opera��o foi poss�vel 
e o valor 0 se a opera��o n�o foi poss�vel (divis�o por zero, por exemplo).
O resultado da divis�o deve retornar por um par�metro por refer�ncia.*/


using namespace std;

int checkandsplit(float num1, float num2, float *result) {
	if (num2 == 0)
    return 0;

	if (num2 != 0) {
    *result = (num1 / num2);
    return 1;
	}
}

int main() {
	
	float num1, num2;
	int check = 0;
	float result = 0;

	cout << "Divisao de 2 numeros" << endl;

	cout << "Entre com o primeiro numero (dividendo): " << endl;
 	cin >> num1;

	cout << "Entre com o segundo numero (divisor): " << endl;
	cin >> num2;

	if ((checkandsplit(num1, num2, &result)) == 0)
		cout << "Essa divisao e impossivel pois nao existe divisao por " << num2 << endl;
	if ((checkandsplit(num1, num2, &result)) == 1)
		cout << "O resultado da divisao de " << num1 << " por " << num2 << " : " << result << endl;
	return 0;
}


