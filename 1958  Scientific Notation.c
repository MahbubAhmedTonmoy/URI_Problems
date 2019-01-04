#include<stdio.h>
int main()
{
    long double x;
    char c[120];
    scanf("%LE",&x);
    sprintf(c,"%LE",x);
    if(c[0] != '-')
        printf("+");
    printf("%.4LE\n",x);
    return 0;
}
