//	********************************
//	*                              *
//  *	Andrew Vianna Carrazzone   *
//  *   andrewcarrazzone@gmail.com *
//  *                              *
//  ********************************
#include <iostream>

using namespace std;

int main()
 {
 int a,b,*c;					// declaração das variaveis a, b e *c;
 a = 4;							// variavel a recebe 4;
 b = 3;							// variavel b recebe 3;
 c = &a;						// variavel c recebe o endereço da variavel a;
 *c = *c +1;					// variavel do tipo ponteiro c que possui o endereço de a recebe ela mesma + 1;
 c = &b;						// variavel c recebe o endereço da variavel b;
 b = b+4;						// b recebe b + 4;
 cout << a << b << *c << endl;	// imprime as variaveis: a == 5, b == 7 e *c == 7;
 }

/*
	A variavel a começa sendo 4 mas a variavel c passa a apontar para ela e recebe +1, fazendo com que a seja 5;
	A variavel b começa sendo 3 mas a variavel c passa a apontar para ela e recebe +4, fazendo com que b seja 7;
	A variavel *c ira imprimir a variavel que ela esta apontando(b).
*/
