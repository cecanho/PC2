#include <iostream>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	string palavra;
	
	cout << "Entre com uma palavra qualquer para as verifica��es (M�ximo de 80 caracteres)!" << endl;
	getline(cin, palavra);
	int tamString = palavra.size();
	
	system("cls||clear");
	
	cout << palavra << " tem " << tamString << " caracteres." << endl;
	
	int countNumbers = 0;
	
	for (int i = 0; i < tamString; i++)
		if (isdigit(palavra[i]))
			countNumbers++;
		
    cout << countNumbers << " caracteres da string " << palavra << " s�o n�meros." << endl;
    
    int countMinusculos = 0;
    
    for (int i = 0; i < tamString; i++)
    	if(palavra[i] >= 97 && palavra[i] <= 122)
    		countMinusculos++;
    	
 	cout << countMinusculos << " caracteres s�o letras min�sculas." << endl;
 	
 	int countAcentuados = 0;
 	
 	for (int i = 0; i < tamString; i++)
 		if((palavra[i] >= 33 && palavra[i] <= 47) || (palavra[i] >= 58 && palavra[i] <= 63))
 			countAcentuados++;
 		
    cout << countAcentuados << " caracteres s�o pontua��es." << endl;
	return 0;
}