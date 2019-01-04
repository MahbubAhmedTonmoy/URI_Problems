#include<iostream>

using namespace std;
int main()
{
  int n,i,t;
 string ch;
  cin>>t;
  for(i=1;i<=t;i++)
    {
    cin >> ch >> n;

    if(ch=="Thor")
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
    }
    return 0;
}
