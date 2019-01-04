#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,n,i,c=0,d=0;
    while((cin >> n)&& n)
    {;
    for(i=1;i<=n;i++)
    {
        cin >> a ;
        if(a==0) c++;
        else if(a==1) d++;

    }
     printf("Mary won %d times and John won %d times\n",c,d);
    c=0;d=0;
    }
    return 0;
}

