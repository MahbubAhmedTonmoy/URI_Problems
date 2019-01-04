#include<iostream>
using namespace std;
int main()
{
    int y;
    while(cin>>y){

        if((y%4 ==0 && y%100!=0)||(y%400==0))
           cout<<"This is leap year"<<"\n";
        if(y%15==0)
            cout<<"This is huluculu festival year"<<"\n";
        if(y%55==0)
        cout<<"This is bulukulu festival year"<<"\n";

        if((y%4 !=0 && y%100==0 && y%15!=0 && y%55!=0)||(y%400!=0))
            cout<<"This is an ordinary year"<<"\n";
    }
    return 0;
}
