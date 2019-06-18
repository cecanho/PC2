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
        }else if (islower(c)){
            minusc++;
        }else if (isupper(c)){
            maiusc++;
        }else if (isdigit(c)){
            num++;
        }else if (isspace(c)){
            espacos++;
        }else if (ispunct(c)){
            pontua++;
        }else{
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