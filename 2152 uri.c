#include<stdio.h>
int main()
{
    int t,i,h,m,o;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&h,&m,&o);
        if(h<10) printf("0%d:", h);
        else printf("%d:", h);
        if(m<10) printf("0%d", m);
        else printf("%d", m);
        if(o == 0) printf(" - A porta fechou!\n");
        else printf(" - A porta abriu!\n");


    }
    return 0;
}

