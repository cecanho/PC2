#include <iostream>
#include <vector>
#include <string.h>
#define MAX 100

using namespace std;

struct Agenda{
	string nome;
	string endereco;
	long int telefone;
	long int CEP;
};

vector <Agenda> dados;

void InserirRegistro(){
	
	Agenda a;
		
	cout << "Entre com o nome da pessoa" << endl;
	getline(cin, a.nome);
	cout << "Entre com o endereço da pessoa" << endl;
	getline(cin, a.endereco);
	cout << "Entre com o telefone da pessoa (somente os números)" << endl;
	cin >> a.telefone;
	cin.ignore();
	cout << "Informe o CEP (somente os números)" << endl;
    cin >> a.CEP;
    
	try{
		dados.push_back(a);
		cout << "Dados registrados com sucesso!" << endl;
	}
	catch (...){
		cout << "Não foi possível registrar os dados!" << endl;
	}
	
}

void BuscarRegistro(){
	
	string nome;
	
	cout << "Entre com seu nome registrado" << endl;
	cin >> nome;
	
	for (int i = 0; i < dados.size(); i++)
		if (dados[i].nome == nome){
			cout << "Nome: " << dados[i].nome << endl;
	 		cout << "Endereço: " << dados[i].endereco << endl;
			cout << "Telefone: " << dados[i].telefone << endl;
			cout << "CEP: " << dados[i].CEP << endl;
		}
}

void BuscarPorPrimeiraLetra(){
	
	char letraInicial;
	
	cout << "Informe uma letra para a busca de nomes filtrada: " << endl;
	cin >> letraInicial;
	
	cout << "Nomes que iniciam com " << letraInicial << endl;
	
	for (int i = 0; i < dados.size(); i++)
		if(dados[i].nome[0] == letraInicial)
			cout << dados[i].nome << endl;
}

int main (){
	
	int op;
	
	do{
		cout << "\tAGENDA ELETRONICA\n" << endl;
		cout << "Entre com a opção desejada" << endl;
		cout << "1 - Inserir novo registro" << endl;
		cout << "2 - Mostrar dados cadastrais" << endl;
		cout << "3 - Imprimir por letra" << endl;
		cout << "0 - Sair" << endl;
		cin >> op;
		cin.ignore();
		
		switch(op){
			case 1:
				InserirRegistro();
				break;
			case 2:
				BuscarRegistro();
				break;
			case 3:
				BuscarPorPrimeiraLetra();
				break;
			default:
				break;
		}
	}
	while(op != 0);
	
	return 0;
}