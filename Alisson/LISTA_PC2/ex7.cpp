
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main()
{
  int num, maior = 0, menor = 0, y=0;
  
   cout << "Digite um numero:" << endl;
   cin >> num;
    
  menor = num;
  maior = num;
  
  for( y = 1; y < 10; y++ ){
    
    cout << "Digite um numero:";
    cin  >> num;
  
    if(num > maior) maior = num;
    if(num < menor) menor = num;
    
  }

  cout << "Menor : " << menor << endl << "Maior: " << maior << endl;
  
  return 0;
  
}