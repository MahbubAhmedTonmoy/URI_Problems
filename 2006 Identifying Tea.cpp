#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,e,m=0;
    cin>>t;
    cin >>a>>b>>c>>d>>e;
    if(t==a)
        m++;
    if(t==b)
        m++;
    if(t==c)
        m++;
    if(t==d)
        m++;
    if(t==e)
        m++;
    cout << m << endl;
    return 0;
}
