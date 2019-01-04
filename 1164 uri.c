#include<stdio.h>
int main()
{
    int a,n,i,j,sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            {
                sum += j;
            }
        }
        if(sum == n)
        {
            printf("%d eh perfeito\n",n);
        }
        else
            printf("%d nao eh perfeito\n",n);
        sum = 0;
    }
return 0;
}
