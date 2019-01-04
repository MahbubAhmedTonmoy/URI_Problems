#include<stdio.h>
int main()
{
int i,j,n,t,sum=0;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
    scanf("%d",&n);
    for(j=1,sum=0;j<=n;j++)
    {

        if(j%2==1)
        {
            sum+=1;
        }

        else if(j%2==0)
        {
            sum-=1;
        }

}

printf("%d\n",sum);
}
return 0;
}

