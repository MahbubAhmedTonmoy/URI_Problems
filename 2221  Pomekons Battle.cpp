#include<iostream>
using namespace std;
int main()
{
    int t,i,b,a1,d1,l1,a2,d2,l2;
    double sum1=0,sum2=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin >> b;
        cin >>a1>>d1>>l1;
        cin >>a2>>d2>>l2;
        sum1 = ((a1 + d1)/2);
        if(l1%2==0) sum1 += b;
        sum2 = ((a2 + d2)/2);
        if(l2%2==0) sum2 += b;
        if(sum1==sum2)
            cout << "Empate" << endl;
        else if(sum1<sum2)
            cout << "Guarte" << endl;
        else
            cout << "Dabriel" << endl;
    }

    return 0;

}
