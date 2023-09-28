#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){

char comedia[200];
char lele;
int laco, letrinha, letrinha2;
float resposta1, resposta2;

fflush(stdin);fgets(comedia,199,stdin);fflush(stdin);

scanf(" %c", &lele);

letrinha=0; 
letrinha2=0;


for(laco=0;laco<strlen(comedia);laco++){
       
       if(isalpha(comedia[laco])){
           letrinha++;
       }
       
            if(toupper(lele) == toupper(comedia[laco])){
                letrinha2++;
            }
}

resposta1=letrinha2*100.;
resposta2=resposta1/letrinha;

printf("%d", letrinha2);
printf("\n");
printf("%.2f%%", resposta2);

return 0;
}

