#include <iostream>

using namespace std;

int CalculaRazao(float num1, float num2, float *razao){
	
	*razao = num1 / num2;
	
	if (num2 == 0)
		return 0;
	return 1;
}

int main(){
	
	float num1, num2;
	float razao = 0;
	
	cout << "Entre com um primeiro valor: " << endl;
	cin >> num1;
	cout << "Entre com um segundo valor: " << endl;
	cin >> num2;
	
	if (CalculaRazao(num1, num2, &razao) != 0)
		cout << "Raz�o: " << razao << endl;
	else
		cout << "N�o foi poss�vel calcular a raz�o!" << endl;
	
	return 0;
}
