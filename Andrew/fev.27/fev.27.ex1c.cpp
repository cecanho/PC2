//	********************************
//	*                              *
//  *	Andrew Vianna Carrazzone   *
//  *   andrewcarrazzone@gmail.com *
//  *                              *
//  ********************************
#include <iostream>

using namespace std;

int main(){
 int a,b,*c,*d,*f;					// declara��es das variaveis;
 a = 4;								// a recebe 4;
 b = 3;								// b recebe 3;
 c = &a;							// c recebe o endere�o da variavel a;
 d = &b;							// d recebe o endere�o da variavel d;
 *c /= 2;							// *c que aponta para o endere�o da variavel a sera dividida por 2;
 f = c;								// variavel f 
 c = d;
 d = f;
 cout << *c << " " << *d << endl;
 return 0;
}

