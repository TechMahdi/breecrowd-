#include<stdio.h>
int main ()
{
    double R, pie,VOLUME;
    pie = 3.14159;
    scanf("%lf",& R);
    VOLUME = (4.0/3)*pie*R*R*R;
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}
