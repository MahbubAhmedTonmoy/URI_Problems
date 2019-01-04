#include <stdio.h>
int main()
{
    int N,i;
    float a,b,c;
    scanf("%d",&N);
    for(i = 1; i<=N;i++)
    {
        scanf("%f %f", &a,&b);
        if(b!=0)
            {
            c = a/b;
            printf("%.1f\n",c);
            }
        else if( b == 0)
            {
            printf("divisao impossivel\n");
            }
}

    return 0;
}

