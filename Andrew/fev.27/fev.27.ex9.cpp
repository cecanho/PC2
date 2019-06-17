#include <iostream>
#define PROVAS 5

using namespace std;

int array[5];
double media;

int main(){
    for (int i = 0; i < PROVAS; i++){
        cout << "Entre com a 1 nota" << endl;
        cin >> array[i];
    };
    for (int j = 0; j < PROVAS; j++){
    media+=array[j];  
    };
    cout << "Media: " << media / PROVAS << endl;
};