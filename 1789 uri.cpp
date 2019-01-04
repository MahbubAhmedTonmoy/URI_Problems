#include<iostream>
using namespace std;
int main()
{
    int i,l,v,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v;
        if(v<10)
            cout<<1;
        else if(v>=10&& v<20)
            cout<<2;
        else if(v>=20)
            cout<<3;
    }
    return 0;
}
