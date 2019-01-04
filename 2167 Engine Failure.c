#include<stdio.h>
int main()
{
    int n,i,RPM,temp=0, c=0,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&RPM);
        c++;
        if(RPM<temp)
           {
               ans = c;
               break;
           }
           temp = RPM;
    }
    printf("%d\n",ans);
return 0;
}

