#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

struct tipo_agenda
              {
    char nome[50]; 
	char ddd[2]; 
    long int tel;
	long int CEP; 
    char endereco[60];
              };

	struct tipo_agenda agenda[TAM];  
           


int menu(); 
void CADASTRAMENTO(void);
void PESQUISA(void);
void LISTAR(void);

int cont=0;
int main() 
         {     
    
         int j;
         char* times;
         char bvnome[40];  
         int i;  

         for(j=0; j<TAM; j++){
        	agenda[j].tel=7777777;  // Prenchendo os campos de TELEFONE com 7777777 para indicar AGENDA COM ESPAÇO VAZIO
        }    
       
//MENU PRINCIPAL 

         int opcoes;
  
         do{     
            
            opcoes=menu(); // chamada da função MENU

            switch(opcoes){
            case 1:
                 CADASTRAMENTO(); 
                 break;
            case 2:
                 system("cls");
                 LISTAR();  
                 system("pause");
                 break;
            case 3:
                 PESQUISA();     
                 break;
        
            case 0:
                 exit(0);
                 break;
                        }
            }while(opcoes!=8);
            

            printf("\n\n");

            return 0;
} 

int menu(void) // FUNÇÃO  MENU
{
  int a;
  
  do{
    
     system("cls");
     printf("\n\n");    



     printf("\t\t\t       AGENDA       \n");

     printf("\n\n");
     printf("\t\t  1 - CADASTRAMENTO DE DADOS\n\n\t\t  2 - LISTAR\n\n\t\t  3 -  PESQUISAR\n\n\t\t  0 - SAIR\n\n");
          
    
     scanf("%d",&a);
   
     }
     while((a<1) || (a>8));
    
 return a;
    
}

void CADASTRAMENTO(void) // FUNÇÃO  CADASTRAMENTO
 {

 system("cls");
 int i;
     
     
     
 if(cont < TAM)
 {
            for(i=0; i<TAM; i++)
            {
                     if(agenda[i].tel==7777777) // Só vai cadastrar nas agendas que tiverem 7777777 no TELEFONE
                     {
                                                
                                                
                      printf("\n\n");   
                      printf("\t\tCADASTRAMENTO  DE DADOS\n\n");
                
                      printf("\n\n");
                      
                     printf("Por favor, preencha os campos abaixo. \n\n");                                              

                      fflush(stdin); //Limpar Buffer do Teclado
                      printf("\n\n");
                      printf("Nome completo :   ");
                      gets(agenda[i].nome);
                      printf("\n\n");					  
                     do{
                        printf("DDD :  ");
                        scanf("%s",&agenda[i].ddd);
                        if(strlen(agenda[i].ddd) != 2) 
                                {
                                printf("Digite um DDD Valido: \n");                   
                                }                
                     }while (strlen(agenda[i].ddd) != 2); 
                     
                     
                     printf("\n\n");
                     printf("Telefone (sem hifen):   ");
                    
                     do{
                        scanf("%d",&agenda[i].tel);
                        }while(agenda[i].tel==7777777);
                        
                     printf("\n\n");
        
                     fflush(stdin); //Limpar Buffer do Teclado
                     printf("\n\n");
                     printf("Endereco Completo:  ");
                      
                     gets(agenda[i].endereco);

                     printf("\n\n");                      
                     printf(" CEP:  ");  
                     do{
                        scanf("%d",&agenda[i].CEP);
                        }while(agenda[i].CEP==7777777);
                        
                     system("cls");
                     printf("\n\n");
                     printf("    Cadastro conclu%cdo com sucesso!   ",3745); printf("\n\n"); printf("\n\n");
                     system("PAUSE");
                     
                     printf("\n\n");
                     system("cls"); 
                   
                     cont++;
                     break;
                     }
            }
 }

if(cont == TAM)
              {
               printf("\n\n No momento, a agenda esta cheia! \n\n");
               system("pause");
              } 
       
}



void PESQUISA() // FUNÇÃO  PESQUISA
     {
     int i;
     char nome_busca[50];
     int nao_tem=999;
     system("cls");
     fflush(stdin); //Limpar Buffer do Teclado
     printf(" Informe o <Nome Completo> ");
     gets(nome_busca);
           
     for(i=0; i<TAM; i++)
     {
             if(agenda[i].tel!=7777777)
             {
                         if(strcmp(agenda[i].nome,nome_busca)==0) 
                         {

                          printf(" ------------------------------------------------------------------\n");                        
                          printf(" Nome Completo:  %s",agenda[i].nome);
                          printf("\n\n");
                          printf(" DDD:  %c%c",agenda[i].ddd[0],agenda[i].ddd[1]);
                          printf("\n\n");
                          printf(" Telefone: %d",agenda[i].tel); 
                          printf("\n\n"); 
                          printf(" Endereco: %s",agenda[i].endereco);
                          printf("CEP: %d", agenda[i].CEP);
                          printf("\n\n"); 
                          printf(" ------------------------------------------------------------------\n");  
                     
                          nao_tem=0;
                          }
             }
     }
            
    
     if(nao_tem==999){
                      system("cls");
                      printf("\n  não foi encontrado nenhum dado correspondente. \n\n");
                      }
                      
     
	  system("PAUSE");                
      system("cls");
      }


void LISTAR(void) // FUNÇÃO LISTAR
{
     
     printf(" ------------------------------------------------------------------\n"); 
     printf("\n\n");
    
     int i;
     int nao_tem=999;
     for(i=0; i<TAM; i++)
     {
                     if(agenda[i].tel!=7777777){
                                              
                     
                                           
                     printf(" Nome Completo:  %s\n",agenda[i].nome);
                     printf(" Endereço completo: %s\n",agenda[i].endereco);
                     printf(" CEP:%d\n", agenda[i].CEP); 
                     printf(" Telefone: %d\n",agenda[i].tel);
					 printf("\n");
                     nao_tem=0;
                     }
                     
      }
            
     if(nao_tem==999)
     {
     system("cls");
     printf("\n  não foi encontrado nenhum dado correspondente. \n\n");
     }
            
     system("PAUSE");
     system("cls");
}

