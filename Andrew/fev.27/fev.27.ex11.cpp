#include <iostream>
#define VALORES 10

using namespace std;

int array[VALORES];
double media;

int main(){
    for (int i = 0; i < VALORES; i++){
        cout << "Entre com a 1 nota" << endl;
        cin >> array[i];
    };
    for (int j = 0; j < VALORES; j++){
    media+=array[j];  
    };
    cout << "Media: " << media / VALORES << endl;
};