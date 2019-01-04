#include<stdio.h>
int main()
{
    int i,n,m,sum=0;
    scanf("%d",&m);
    scanf("%d",&n);
    if(m<n)
    {
    for(i=m;i<=n;i++)
        {
        if(i%13!=0)
        sum+=i;
        }
        printf("%d\n",sum);
    }
    if(m>n)
    {
    for(i=n;i<=m;i++)
        {
        if(i%13!=0)
        sum+=i;
        }
        printf("%d\n",sum);
        }

return 0;
}
