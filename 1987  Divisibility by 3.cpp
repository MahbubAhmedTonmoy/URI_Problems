#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,d,sum;
    long long m;
    while(cin >> n >> m)
    {
    sum = 0;
    while(m!=0)
    {
        sum += (m%10);
        m /=10;
    }
    d = sum % 3;
    if(d == 0)
    {
        printf("%d sim\n",sum);
    }
    else
        printf("%d nao\n",sum);
}
return 0;
}
