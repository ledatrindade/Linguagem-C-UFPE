#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char letra; float n, resultado;
    
    scanf(" %c\n", &letra);
    scanf("%f", &n);
    
    if (n<=0) {
        printf("Entrada invalida!");
       exit(0);
    }
    
  
    if (letra=='C' || letra=='c'){
        resultado=3.14*n*n;
        printf("%.2f\nCirculo", resultado);
    }
    
    else if (letra=='Q' || letra=='q'){
        resultado=n*n;
        printf("%.2f\nQuadrado", resultado);
    }
    
    else if (letra=='T' || letra=='t'){
        resultado=n*n*1.7/4;
        printf("%.2f\nTriangulo equilatero", resultado);
    }
    
    
    else { printf("Entrada invalida!");}
    
    return 0;
    }
