#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b || b==c || c==a || a==b+c || b==c+a||c==a+b)
   cout<<"S"<<endl;
else
    cout<<"N"<<endl;

return 0;
}
