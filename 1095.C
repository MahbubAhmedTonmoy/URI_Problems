#include<stdio.h>
int main()
{
    float I,J,n=3,m=1;
    for(I=0 ; I<=2.2 ; I+=0.2)
    {
    for(J=m ; J<=n ; J++)
    {
        printf("I=%.1f J=%.1f\n",I,J);

    }
    n=n+0.2;
    m=m+0.2;
    }
return 0;
}
