#include <iostream>

using namespace std;

int main(){
    int i = 2, maior = -9999999999, menor = 9999999999, teste;
    cout << "Entre com o 1 valor:" << endl;
	cin >> teste;
	if (teste > maior){
		maior = teste;
	};
	if (teste < menor){
		menor = teste;
	};
	cout << "Menor: " << menor << endl << "Maior :" << maior << endl;
    do    {
        cout << "Entre com o " << i << " valor:" << endl;
        cin >> teste;
        if (teste > maior){
			maior = teste;
		};
		if (teste < menor){
			menor = teste;
		};
		cout << "Menor: " << menor << endl << "Maior :" << maior << endl;
		i++;
    } while (i<=10);

}