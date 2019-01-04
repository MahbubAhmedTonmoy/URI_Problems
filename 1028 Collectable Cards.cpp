#include<iostream>
using namespace std;
int main()
{
    int t,a,b,temp,c;
    cin>>t;
    while(t--){
    cin >> a >> b;
      if(a<b)
      {
          temp = a;
          a=b;
          b=temp;
      }
      while(a%b!=0)
      {
           c = a;
          a =b;
          b = c %b;
      }
       cout << b << endl;
           c =0;

    }
    return 0;
}
