#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/* 15. Fazer uma função em "C" que retorna a razão entre dois números. 
A função deve retornar pelo comando return o valor 1 se a operação foi possível 
e o valor 0 se a operação não foi possível (divisão por zero, por exemplo).
O resultado da divisão deve retornar por um parâmetro por referência.*/


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


