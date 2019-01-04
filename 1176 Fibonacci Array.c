#include<stdio.h>
int main()
{
    long long int a=0,b=1,next,n;
    int i,j,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        a=0;b=1;
        scanf("%lld",&n);
        n = n+1;
        for(j=0,next=0;j<n;j++)
        {
            if(j<=1)
                next = j;
            else
            {
                next = a+b;
                a = b;
                b = next;
            }

        }
        printf("Fib(%lld) = %lld\n",n-1,next);

}
return 0;
}

