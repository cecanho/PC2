#include <iostream>

using namespace std;

int calcula (int x){
	
	int i;
	if ((x=x*2)>5) return(x+3);
	for(i=0;i<10;i++)
	{
	if (i<5) continue;
	if (x>8) break;
	 x+=2;
	}
	return x;

}
int main(){
	
//	int a,b,*c;
//	 a = 3;
//	 b = 4;
//	 c = &a;
//	 b++;
//	 *c = a+2;
//	 cout << a << ", " << b << endl;
	  //1a) Saída em 5, 5
	 
//	 int a,b,*c;
//	  a = 4;
//	  b = 3;
//	  c = &a;
//	  *c = *c +1;
//	  c = &b;
//	  b = b+4;
//	  cout << a << ", " << b << ", " << *c << endl;
	  // 1b) Saída em 5, 7, 7
	  
//	  int a,b,*c,*d,*f;
//	  a = 4;
//	  b = 3;
//	  c = &a;
//	  d = &b;
//	  *c /= 2;
//	  f = c;
//	  c = d;
//	  d = f;
//	  cout << *c << ", " << *d << endl;
	  // 1c) Saída em 3, 2
	  
//	  int a,b,c;
// 	 char d;
//	 a=1;b=2;c=3;d='A';
//	 a+=b*c;
//	 d=(a>7)?d-1:d+1;
//	 b = calcula(b);
//	 c = calcula(calcula(a));
//	 a = c++;
//	 cout << a << ", " << b << ", " << c << ", " << d << endl;
	 // 1d) Saída em 37, 10, 38, B 
	 
}
