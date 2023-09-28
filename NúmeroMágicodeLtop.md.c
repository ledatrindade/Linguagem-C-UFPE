#include<stdio.h>
int main(){

int laco, numerozinho;

scanf("%d", &numerozinho);

double resposta, meme, memes;

    laco=3;
    
    while(laco<=numerozinho){
        
   
         resposta=meme+memes;
         meme=memes;
         memes=resposta;
         
         laco=laco+1;}
         
    resposta=memes/meme;
    
            if(numerozinho>2){
                
                printf("%.15f", resposta);
            
                
            } else { printf("Valor invalido");}
         
    
    return 0;
}
