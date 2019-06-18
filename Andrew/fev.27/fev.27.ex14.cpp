#include <iostream>
#define NUMS 2

using namespace std;

int soma( int n1, int n2 ){
    int soma = n1 + n2;
    return soma;
};

int diferenca( int n1, int n2 ){
int diferenca = n1 - n2;
return diferenca;
};

int mult( int n1, int n2 ){
int mult = n1 * n2;
};

int main(){
    int val1=0, val2=0;
    cout << "Entre com o primeiro valor." << endl;
    cin >> val1;
    cout << "Entre com o segundo valor." << endl;
    cin >> val2;
    cout << "Soma: " << soma( val1, val2 ) << endl;
    cout << "Diferenca: " << diferenca( val1, val2 ) << endl;
    cout << "Produto: " << mult( val1, val2 ) << endl;
};