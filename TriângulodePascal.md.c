#include<stdio.h>
int main(){

int linhas, colunas, numero;
int dificil[100][100];

scanf("%d", &numero);

for (linhas=0; linhas<numero; linhas++){
       
        for (colunas=0; colunas<numero; colunas++) 
        
        {dificil[linhas][colunas]=0;}
  
        dificil[linhas][0]=1;
   }
   
for (linhas=1; linhas<numero; linhas++){
    
        for (colunas=1; colunas<numero; colunas++) {dificil[linhas][colunas]=dificil[linhas-1][colunas]+dificil[linhas-1][colunas-1];}
   
   }
   
for (linhas=0; linhas<numero; linhas++){
    
        for (colunas=0; colunas<numero; colunas++){
            
	    if (dificil[linhas][colunas]!=0)
		   
		    printf ("%d ",dificil[linhas][colunas]);
   }
   
   printf ("\n");
   
   }
   
   return 0;
}
   
