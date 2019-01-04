#include <stdio.h>
int main()
{
    int taka,h,a,fifty,b,twenty,c,ten,d,five,e,two,f,one;
    scanf("%d", &taka);
    h = taka /100;
    a = taka%100;
    fifty = a/50;
    b= a%50;
    twenty = b/20;
    c = b%20;
    ten = c/10;
    d=c%10;
    five = d/5;
    e = d%5;
    two = e/2;
    f=e%2;
    one = f/1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",taka,h,fifty,twenty,ten,five,two,one);
    return 0;
}
