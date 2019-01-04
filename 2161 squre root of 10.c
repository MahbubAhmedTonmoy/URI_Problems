#include<stdio.h>

int main()
{
    int n,i;
    double ans =0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ans = ans + 6.0;
        ans = 1.0/ans;
    }

    printf("%.10lf\n",3+ans);


return 0;
}
