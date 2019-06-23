#include<stdio.h>
#include<conio.h>
#include <stdlib.h>


#define LINHA 2
#define COLUNA 2



 
int main ( )
{
float matriz[LINHA][COLUNA];
float diferenca = 0, num;

int i, j;
 
  printf ("\nDigite valor para os elementos da matriz\n\n");
  
  for ( i=0; i<LINHA; i++ ){
  
    for ( j=0; j<COLUNA; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%f", &matriz[i][j]);
       //matriz[i][j];
    }
}
  printf("\n\n******************* Saida de Dados ********************* \n\n");
  
  for ( i=0; i<LINHA; i++ ){
  
    for ( j=0; j<COLUNA; j++ )
    {
      printf ("\nElemento[%d][%d] = %2.2f \n", i, j, matriz[i][j]);
      
    }
}
    

    
    	float colunaPar= 0;
    	float totalColuna = 0;
    	int k, l, cont;
    	
    	
    	for (k=1;k<LINHA; k++){
		
    		for (l = 1; l < COLUNA; l++)
    			if (j % 2 == 0){
    			totalColuna += matriz[k][l];
    				cont++;
				}
				colunaPar = totalColuna / cont;
			}
	
		float totalLinha =0;
		float linhaImpar=0;
		int m, n;
		
		for (m = 1; m <= LINHA; m++) {
		
    		for (n = 1; n <= COLUNA; n++) 
				if ((i % 2) == 1) {
      				totalLinha += matriz[m][n];
        			cont++;
      }
    			linhaImpar = totalLinha / cont;
}
    			diferenca = colunaPar - linhaImpar;
				
				printf (" Diferença é: %2.2f", diferenca);
 	  
 	  

}




