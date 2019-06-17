#include <iostream>
#define NUM 10

using namespace std;

int main(){
    int vetor[NUM];vetor[0] = 0;vetor[1] = 0;vetor[2] = 0;vetor[3] = 0;vetor[4] = 0;vetor[5] = 0;vetor[6] = 0;vetor[7] = 0;vetor[8] = 0;vetor[9] = 0;
    int aux, menu;

    do{
        for (int i = 0; i < NUM; i++){
            cout << "Posicao " << i << " | " << "Valor: " << vetor[i] << endl;
        };
        cout << "1 - Entrar com os valores" << endl;
        cout << "2 - Ordenar os valores" << endl;
        cout << "0 - Sair" << endl;
        cin >> menu;
        switch (menu){

        case 1:
            for (int j = 0; j < NUM; j++){
                cout << "Entre com o " << j << " valor." << endl;
                cin >> vetor[j];
            };
            break;

        case 2:
            do{
                cout << "1 - Ordenar os valores em ordem crescente" << endl;
                cout << "2 - Ordenar os valores em ordem decrescente" << endl;
                cout << "3 - Voltar" << endl;
                cin >> menu;
                switch (menu){
                case 1:
                    for (int  k = 0; k < NUM; k++){
                        for (int l = 0; l < NUM; l++){
                            if (vetor[l] > vetor[l+1]){
                                aux = vetor[l + 1];
                                vetor[l + 1] = vetor[l];
                                vetor[l] = aux;
                            };
                        };
                    };
                    break;

                case 2:
                    for (int m = 0; m < NUM; m++){
                        for (int n = 0; n < NUM; n++){
                            if (vetor[n] < vetor[n+1]){
                                aux = vetor[n + 1];
                                vetor[n + 1] = vetor[n];
                                vetor[n] = aux;
                            };
                        };
                    };
                    
                    break;

                default:
                    break;
                }
            } while (menu != 3);
            
            break;

        case 0:
            /* code */
            break;
        
        default:
            cout << "Valor incorreto" << endl;
            break;
        };

    } while (menu != 0);
};