#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,t,j,sum;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        for(i=0,sum=0;i<n;i++)
        {
            sum = sum + pow(2,i);
        }
        printf("%d\n",sum);
    }
        return 0;
}

