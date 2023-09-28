#include<stdio.h>
int main (){
    
    int numero3; double numero2, numero, resultado;
    
    scanf("%lf\n%lf\n%d", &numero, &numero2, &numero3);
    
    numero3=numero3%10;
    
    switch (numero3)
    {
    
    case 1: 
    resultado=numero+numero2;
    break;
    
    case 2: 
    resultado=numero-numero2;
    break;
    
    case 3:
    resultado=numero*numero2;
    break;
    
    
    case 4:
    resultado=numero/numero2;
    break;
    
    }
    
    printf("%.3f", resultado);
    
    
}
