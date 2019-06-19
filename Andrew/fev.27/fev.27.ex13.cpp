#include<iostream>
#include<string>
#include<cstring>
using namespace std;

char c;
char *vetorPos;
char vetorTexto[80];
string texto;
int chars=0, alfab=0, minusc=0, maiusc=0, num=0, espacos=0, pontua=0, outros=0;

int main(){   
   cout << "Entre com o texto: " << endl;
   getline(cin, texto);
   strcpy(vetorTexto, texto.c_str());
   for (vetorPos=vetorTexto;*vetorPos!='\0';vetorPos++){
        c=*vetorPos;
        chars++;
        if (isalpha(c)){
            alfab++;
        }
		if (islower(c)){
            minusc++;
        }
		if (isupper(c)){
            maiusc++;
        }
		if (isdigit(c)){
            num++;
        }
		if (isspace(c)){
            espacos++;
        }
		if (ispunct(c)){
            pontua++;
        }
		if (!isalpha(c)){
            outros++;
        };
   };
   cout << "Total de caracteres: " << chars << endl;
   cout << "Total de letras do alfabeto: " << alfab << endl;
   cout << "Total de caracteres minusculos: " << minusc << endl;
   cout << "Total de caracteres maiusculos: " << maiusc << endl;
   cout << "Total de numeros: " << num << endl;
   cout << "Total de espacos: " << espacos << endl;
   cout << "Total de pontuacao: " << pontua << endl;
   cout << "Outros: " << outros << endl;
};
