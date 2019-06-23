#include <stdio.h> 
#include <iostream>

#define MAX 10 
using namespace std;
int main() { 
	int valor[MAX], soma=0, media, cont=0, i; 
		for (i=0; i<MAX; i++) { 
		cout << "Informe o " << i+1<< "º"<< "valor: "<<endl; 
		cin >> valor[i]; 
	soma += valor[i]; 
} 
	media = soma / MAX; 
		for (i=0; i<MAX; i++) 
			if (valor[i] == media) 
		cont++; 
			if (cont > 0) 
		printf("%d valor%s igua%s à media (%d)\n", cont, (cont>1) ? "es" : "", (cont>1) ? "is" : "l", media); 
	else 
		printf("Nenhum valor igual à media\n"); 
return 0; 
}
