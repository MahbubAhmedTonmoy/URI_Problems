#include<iostream>
using namespace std;
int main()
{
    long long int x,y;
    while(cin>>x>>y){

        if(x>=y)
            cout<<x-y<<"\n";
        else
            cout<<y-x<<"\n";
    }
    return 0;
}
