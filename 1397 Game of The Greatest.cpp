#include<iostream>
using namespace std;
int main()
{
    int a,b,n,i,c=0,d=0;
    while((cin >> n)&& n){;
    for(i=1;i<=n;i++)
    {
        cin >> a >> b;
        if(a>b) c++;
        else if(b>a) d++;

    }
     cout << c <<" "<<d<<endl;
     c=0;d=0;
    }
    return 0;
}
