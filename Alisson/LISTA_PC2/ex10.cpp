#include <stdio.h>
#include <iostream>
#define SIZE 5

using namespace std;


float *le_array (float valor[], int size) {
int i;
 for (i=1; i<size; i++) {
 cout << "Entre com valores float: " << i << endl;
 cin >> valor[i];
}
 return (valor);
}
int main(void)
{
 float valores[SIZE];
 float *pfloat;
 int i;
 pfloat = le_array(valores, SIZE);
 for (i=1; i<=SIZE; i++)
 cout <<" Valores digitados " << pfloat[i] << endl;
}