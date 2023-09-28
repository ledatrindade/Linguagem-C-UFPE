#include<stdio.h>

int main(){
    double x; double y; double valordias; double valorkm; double g; double h; double z;
        scanf("%lf", &x);
        scanf("%lf", &y);
    valordias=30*x;
    valorkm=0.01*y;
    g=valordias+valorkm;
    h=g*0.1;
    z=g-h;
        printf("Valor a pagar pelo aluguel: R$ %lf", z);
return 0;
}
