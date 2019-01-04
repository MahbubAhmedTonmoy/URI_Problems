#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,x=0;
    int min=99999;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min)
        {
            min = a[i];
            x = i;
        }
    }
    cout << x+1 << endl;
    return 0;
}
