#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

	void main()
 {
 int a,b,*c;
 a = 4;
 b = 3;
 c = &a; 			// variavel c sendo atribuida pelo valor de a; c = 4
 *c = *c +1; 		// ponteiro *c sendo atribuido por valor de *c + 1.
 c = &b; 			// c = 7
 b = b+4; 			// b = 3 + 4


 cout << "a = " << a << " | b = " << b << " | c = " << *c << endl ;
 

 					// a = 5 | b = 7 | *c = 7

 }
