#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main()
 {
 int a,b,*c,*d,*f;
 a = 4;
 b = 3;
 c = &a; 		// c = 4
 d = &b;		// d = 3
 *c /= 2;		// *c = 4 / 2
 f = c;			// f = endereço de a 
 c = d;			// c = 3
 d = f;			// d = 4
 cout << "*c ="<< *c << " | *d =" << *d << endl;

 // *c =3 | *d =2
 }
