#include<stdio.h>
int main()
{
    int h,m;
    char c;
    while(scanf("%d%c%d",&h,&c,&m)!=EOF)
    {
        int a = (h*60+m)-420;
        if(h>=7)
            printf("Atraso maximo: %d\n",a);
        else
            printf("Atraso maximo: 0\n");

    }
    return 0;
}

