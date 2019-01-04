#include<stdio.h>
int main()
{
    int y;
    int x,i;
    scanf("%d %ld",&x,&y);
    for(i=1 ; i<=y ; i++)
    {
        printf("%d",i);
        if(i%x != 0)
        {
            printf(" ");
        }
        else if(i%x==0)
        {
            printf("\n");
        }
    }
    return 0;
}
