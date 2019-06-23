#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(){
    float maior=0, menor=0, media=0, negativo=0;
    float pos[MAX];

    printf("Entre com pos numeros:");
    printf("\n");
	
	for (int a=0;a<MAX;a++){
      printf("Posicao %d : ", a+1);
      scanf("%f", &pos[a]);
      
	  if(a==0){
	  
	  maior=pos[a];
	  
	  menor=pos[a];
	}

	  media /= MAX;
	}
	
	

	  for (int b =0;b <MAX;b++){
	  
	  
      if(pos[b]>maior){
        maior=pos[b];
      }  
	}
  	  printf("\nO maior valor é %2.2f\n", maior);
  	  
      for (int c=0;c<MAX-1;c++){
	 
        if(pos[c]<menor){
            menor=pos[c];
        }
	}
	printf("\nO menor valor (sem contar a ultima posicao) é  %2.2f\n\n", menor);
	
	for (int d = 0; d< MAX; d++){
		  media += pos[d];
    }
    
    media /= MAX;
    
    printf("\nA média de valors dos vetores: %2.2f\n\n", media);
	
	system("pause");
    return 0;
}
