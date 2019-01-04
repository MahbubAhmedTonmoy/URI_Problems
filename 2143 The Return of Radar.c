#include<stdio.h>
int main()
{
    int n,i,t;

    while(scanf("%d",&t))
    {
        for(i=1;i<=t;i++)
        {

        scanf("%d",&n);
        if(n%2!=0)
            printf("%d\n",(n*2)-1);
        else
            printf("%d\n",(n*2)-2);
        }
        if(t==0) break;
    }
    return 0;
}

