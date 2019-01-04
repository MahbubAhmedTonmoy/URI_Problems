#include<stdio.h>
int main()
{
    int p,q,i,t;
    double a,sum = 0.0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&p,&q);


    if(p==1001)
        a= q*1.50;

     if(p==1002)
        a= q*2.50;

     if(p==1003)
        a= q*3.50;


     if(p==1001)
        a= q*1.50;


     if(p==1004)
        a= q*4.50;

     if(p==1005)
        a= q*5.50;

       sum +=a;
    }

    printf("%.2lf\n",sum);
}
