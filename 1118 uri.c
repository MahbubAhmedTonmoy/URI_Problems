#include<stdio.h>
int main()
{
    float a,b,ave,x=1,y=1;
    int n;
    while(1)
    {
        scanf("%f",&a);
        if(a<0 || a>10)
        {
            printf("nota invalida\n");
        }
        while(x==1)
        {
        scanf("%f",&b);
        if(b<0 || b>10)
        {
            printf("nota invalida\n");
        }
        x+=2;
        }
        ave = (a+b)/2;
        printf("media = %.2f\n",ave);
        printf("novo calculo (1-sim 2-nao)\n");

        while(y==1)
        {
            scanf("%d",&n);
            if(n==1)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
            y+=2;
        }
        if(n==2)
            break;

    }
    return 0;
}
