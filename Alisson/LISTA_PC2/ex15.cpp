#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int razao(float a, float b, float *resultado);

int main (){
	float a, b;
	float resultado = 0;
	
	
	cout << "\n\n \t\t########## CALCULANDO A RAZAO ##########\n\n" << endl;
	cout << "\n\t\tEntre com um numero para variavel A:" << endl << "\t\t";
	cin >> a;
	
	cout << "\n\t\tEntre com um numero para variavel B:" << endl << "\t\t";
	cin >> b;
	
	if ((razao( a,  b,  &resultado))== 1)
	cout << "\n\t\tCalculo efetuado com sucesso!!!" << endl << "\nResultado: " << resultado << endl;
	
	
	else if ((razao( a, b, &resultado)) == 0)
	
	cout << "\n\t\tNão foi possivel efetuar o calculo.";
	
	
}
int razao(float a, float b, float *resultado) {
 	 if (b == 0) 
 	
	  { *resultado = 0; return 0; }
  else
    	*resultado = a / b;
  return 1;
}
