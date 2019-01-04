#include<stdio.h>
int main()
{
    int day,year,a,month,d;
    scanf("%d",&day);
    year = day/365;
    a = day%365;
    month = a/30;
    d = a%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia (s)\n",year,month,d);
    return 0;
}
