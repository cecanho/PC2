#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int main (void){
    string palavra;
    cout <<"Digite uma palavra: ";
    getline(cin, palavra);
    
    int tamPalavra = palavra.size();
    
	system("cls||clear"); 
	  
    cout << "Voce digitou a palavra: "<< palavra << endl;
    cout << "\nEla Possue: " << tamPalavra << " caracteres.\n" << endl;
    
    int contMaiuscula = 0;
    
    for (int i = 0; i <= tamPalavra; i++)
    	if (isupper(palavra[i]))
    		contMaiuscula++;
    		
    		cout << contMaiuscula << " Letras Maiusculas.\n" << endl;
    		
    int contMinuscula = 0;
    
    for (int i = 0; i<= tamPalavra; i++)
    	if (islower(palavra[i]))
    		contMinuscula++;
        cout << contMinuscula << " Letras minusculas.\n" << endl;
    
    int contNumeros = 0;
    	for (int i = 0; i < tamPalavra; i++)
    	if (isdigit (palavra[i]))
    		contNumeros++;
        cout << contNumeros << " Numeros.\n"<< endl;
    
    int contPont = 0;
    	for (int i = 0; i < tamPalavra; i++)
    	if (ispunct (palavra[i]))
    		contPont++;
    	cout << "\nE " << contPont <<" Pontuacao" << endl;
    	cout <<"\n\n";

		system ("pause");

		return EXIT_SUCCESS;
}
   
