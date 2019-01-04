#include<iostream>

using namespace std;
int main()
{
    int i,n,a=0,b=0;
    long long int t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n==1) a++;
        else if(n==0) b++;
    }
    if(a>b)
        cout << "N" << endl;
    else if(a==b)
        cout << "N" << endl;
    else
    cout << "Y" << endl;

    return 0;
}
