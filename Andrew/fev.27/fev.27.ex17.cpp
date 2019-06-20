#include <iostream>
#define NOTA 4

using namespace std;

double leiaNota(double n) {
    return n;
};

int main(){

    double nota;
    double vetor[NOTA];

    for (int i = 1; i < NOTA; i++){
        cout << "Entre com a nota da " << i << " prova." << endl;
        cin >> nota;
        cout << "Nota da " << i << " prova: " << leiaNota(nota) << endl;
    }
    
    return 0;
}