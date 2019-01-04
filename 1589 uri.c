#include<stdio.h>
int main()
{
    int i,n,R1,R2,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&R1,&R2);
        r=R1+R2;
        printf("%d\n",r);
    }
return 0;
}
