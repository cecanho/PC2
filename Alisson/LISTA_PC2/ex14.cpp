#include<stdio.h>

int CalculaNumeros(int A, int B);

int main()
{
   int N, num1, num2;


   printf("Digite o 1o. numero: ");
   scanf("%d", &num1);
   printf("Digite o 2o. numero: ");
   scanf("%d", &num2);
   
   CalculaNumeros(num1, num2);

   return 0;
};

int CalculaNumeros( int num1, int num2) {
	printf ("\nSoma: %d", num1+num2);
	printf ("\nSubitra��o: %d", num1-num2);
	printf ("\nMultiplica��o: %d", num1*num2);

};
