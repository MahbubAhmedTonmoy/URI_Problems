#include<stdio.h>
int main()
{
    int n,i,a,max=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1,max=0;i<=n;i++)
        {
            scanf("%d",&a);
            if(a>max)
                max=a;
        }
        if(max<10)
            printf("1\n");
        else if(max>=10 && max<20)
            printf("2\n");
        else if(max>=20)
            printf("3\n");

    }
    return 0;
}

