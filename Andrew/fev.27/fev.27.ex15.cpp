#include <iostream>

using namespace std;

int checa(double b){
    if (b == 0){
        return 0;
    }
    if (b != 0){
        return 1;
    }
}

int main(){
double A=0.0,B=0.0;

cout << "Entre com o valor de A: " << endl;
cin >> A;
cout << "Entre com o valor de B: " << endl;
cin >> B;

    if (checa( B )==0){
        cout << "Divisao nao e possivel!!" << endl;
    }
    if (checa( B )==1){
        cout << "Divisao: " << A/B << endl;
    }
    return 0;
}
