#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20];

    while(cin>>a)
    {
        if(a[0]=='0') break;
        unsigned long long int i,ans;

        for( i=1,ans=1;i<=strlen(a);i++)
        {
            ans *= i;
        }
        cout << ans << endl;
    }
    return 0;
}

