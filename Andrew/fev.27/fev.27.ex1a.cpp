//	********************************
//	*                              *
//  *	Andrew Vianna Carrazzone   *
//  *   andrewcarrazzone@gmail.com *
//  *                              *
//  ********************************
#include <iostream>

using namespace std;

int main(){
 int a,b,*c;				// declarações das variaveis;
 a = 3;						// variavel a recebe o valor 3;
 b = 4;						// variavel b recebe o valor 4;
 c = &a;					// variavel c recebe o endereço da variavel a;
 b++;						// b recebe b + 1;
 *c = a+2;					// variavel do tipo ponteiro que aponta para o endereço de a recebe a+2;
 cout << a << b << endl;	// imprime os valores de a(5) e b(5).
 return 0;
 }

