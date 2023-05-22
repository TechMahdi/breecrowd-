#include<stdio.h>
int main ()
{
    double n1,n2,n3,n4,media,m;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    media =((n1*2)+(n2*3)+(n3*4)+(n4*1))/((10));
    if(media>=7)
    {
        printf("Media: %.1lf\n",media);
        printf("Aluno aprovado.\n");
    }
    else if(media <5)
    {
        printf("Media: %.1lf\n",media);
        printf("Aluno reprovado.\n");
    }
    else if(media >=5 && media<=6.9)
    {
        scanf("%lf",&m);
        printf("Media: %.1lf\n",media);
    printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",m);
        double avg=(((media+m))/((2)));
        if(avg>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avg<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",avg);
    }
    return 0;
}
