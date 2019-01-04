#include<stdio.h>
int main()
{
    int i,n;
    long long int r,reg;
    double note,max=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lf",&r ,&note);
        if(max<note)
        {
            max=note;
            reg = r;
        }


    }
    if(max>=8.0)
  printf("%d\n",reg);
    else
    printf("Minimum note not reached\n");
}

