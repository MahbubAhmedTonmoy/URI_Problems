#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    int t,x,y,ans;
    cin>>t;
    while(t--)
    {
        ans = 0;
        cin >> x>> y;
        ans = (x*y)/2;
        printf("%d cm2\n",ans);
    }

    return 0;
}
