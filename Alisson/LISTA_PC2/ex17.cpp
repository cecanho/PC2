#include<stdio.h>

/* Protótipos */
float notaAluno( float n1,  float n2, float n3);

/* Função Principal */
int main()
{
   float N, n1,n2,n3;

	printf ("Média de Aluno.\n");
	
   printf("\nDigite a primeira nota: \n");
   scanf("%f", &n1);
   printf("\nDigite a segunda nota: \n");
   scanf("%f", &n2);
 	printf("\nDigite o a terceira nota: \n");
   scanf("%f", &n3);
   printf ("A média do aluno é: %2.2f ", notaAluno(  n1, n2,n3) );

   return 0;}
   

/* Funções */
float notaAluno( float n1, float n2, float n3){
	return ((n1+n2+n3)/3);
}


