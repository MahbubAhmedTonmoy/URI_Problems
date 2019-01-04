#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,a;
    char s[10100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%s", s);
    a = strlen(s);
    printf("%.2lf\n",a*0.01);
    }
    return 0;
}
