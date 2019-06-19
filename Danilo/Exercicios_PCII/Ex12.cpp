#include <iostream>
#define LINHAS 5
#define COLUNAS 3

using namespace std;

int main (){
	
	float matriz[LINHAS][COLUNAS];
	
	for(int i = 0; i < LINHAS; i++)
		for(int j = 0; j < COLUNAS; j++){
			cout << "Entre com um número inteiro: ";
			cin >> matriz[i][j];
		}
		
	cout << "Valores da matriz" << endl;
	
	for (int i = 0; i < LINHAS; i++)
		for(int j = 0; j < COLUNAS; j++)
			cout << matriz[i][j] << endl;
	
	
	float somaLinhas = 0;
	float somaColunas = 0;
	float mediaLinhas = 0;
	float mediaColunas = 0;
	int l, m, cont;
			
	for (l = 1; l <= LINHAS; l++)
		for(m = 1; m < COLUNAS; m++)
			if(l % 2 == 1){
				somaLinhas += matriz[l][m];
				cont++;
			}
			
	mediaLinhas = somaLinhas/cont;
				
				
	for (l = 1; l < LINHAS; l++)
		for(m = 1; m < COLUNAS; m++)
			if (m % 2 == 0){
				somaColunas += matriz[l][m];
				cont++;
			}
			
	mediaColunas = somaColunas / cont;
	
	float diferencaMedias = mediaColunas - mediaLinhas;
	cout << "Diferença entre as médias de coluna e linha: " << diferencaMedias << endl;
								
	return 0;
}
