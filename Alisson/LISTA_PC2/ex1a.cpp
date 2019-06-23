#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	
 int a,b,*c;
 a = 3;
 b = 4;
 c = &a;			// c = 3
 b++;				// b = 5+1
 *c = a+2;			//*c = 3+2
 cout << "a = " << a <<"|" << " b = "<< b <<  endl; 

 // a = 5 ; b = 5;
 
return 0;
}
