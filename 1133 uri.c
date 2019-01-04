#include<stdio.h>
int main()
{
    int x,y,n;
    scanf("%d %d",&x,&y);
    if(x<y)
        for(n=(x+1);n<y;n++)
    {
        if(n%5 == 2 || n%5 == 3)
            printf("%d\n",n);
    }
    if(x>y)
        for(n=(y+1);n<x;n++)
    {
        if(n%5 == 2 || n%5 == 3)
            printf("%d\n",n);
    }
    return 0;
}
