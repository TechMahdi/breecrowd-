#include<stdio.h>
int main ()
{
    int a,b,c,d;
    double e,f,VALORAPAGAR;
    scanf("%d %d %lf",&a,&b,&e);
    scanf("%d %d %lf",&c,&d,&f);
    VALORAPAGAR = (b*e) +(d*f);
    printf("VALOR A PAGAR: R$ %.2lf\n",VALORAPAGAR);
    return 0;
}

