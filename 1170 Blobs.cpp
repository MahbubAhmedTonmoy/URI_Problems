#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0;
    double f;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin >> f;
        c=0;
        while(f>1)
        {

            f=f/2;
            c++;
        }
       cout << c <<" dias"<<endl;
    }
    return 0;
}
