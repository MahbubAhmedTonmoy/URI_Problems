
#include<stdio.h>

int main()
{
    char name[1000];
    double v;
    double d=0.0,t=0.0;

    while(scanf("%s",&name)!=EOF)
    {
        scanf("%lf",&v);
        t += v;
        d++;
    }
    printf("%.1lf\n",t / d);
    return 0;
}


