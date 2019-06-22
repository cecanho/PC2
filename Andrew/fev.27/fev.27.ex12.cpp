#include <iostream>
#define LIN 5
#define COL 3

using namespace std;

int main (){
	
	float matriz[LIN][COL];
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			cout << "Entre com um número inteiro para a posicao: | Linha: " << i << " | Coluna: " << j << " | " << endl;
			cin >> matriz[i][j];
		}
    }

	cout << "Valores da matriz" << endl;
	
	for (int k = 0; k < LIN; k++){
		for(int l = 0; l < COL; l++){
            cout << "Linha " << k << " Coluna: " << l << " Tem o valor: " << matriz[k][l] << endl;
        }
    }
	
	float somaLinhas = 0;
	int cont;
			
	for (int m = 1; m <= LIN; m++){
		for(int n = 1; n < COL; n++){
			if(m % 2 == 1){
				somaLinhas += matriz[m][n];
				cont++;
			}
        }
    }

	float mediaLinhasImpares = somaLinhas/cont;
	
	float somaColunas = 0;
				
	for (int o = 1; o < LIN; o++){
		for(int p = 1; p < COL; p++){
			if (p % 2 == 0){    
				somaColunas += matriz[o][p];
				cont++;
			}
        }
    }

	float mediaColunasPares = somaColunas / cont;
	
	float diferencaMedias = mediaColunasPares - mediaLinhasImpares;
	cout << "Diferenca: " << diferencaMedias << endl;
								
	return 0;
}
