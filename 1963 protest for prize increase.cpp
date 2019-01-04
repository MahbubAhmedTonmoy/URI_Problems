#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double oldp,newp,ans;
    cin >> oldp >> newp;

    ans= ((newp-oldp)*100)/oldp;
        printf("%.2lf%%\n",ans);

    return 0;
}
