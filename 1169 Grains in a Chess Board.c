#include<stdio.h>
#include<math.h>
int main()
{

    int a,n,i;
    unsigned long long int x;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n);
        x=pow(2,n)/12000;
        printf("%lld kg\n",x);
    }
    return 0;
}

