#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string a,b,c,d;
        cin >> a >> b >> c >> d;

        int A,C;
        cin >> A >> C;
        if(b[0]=='P')
        {
            if((A+C)%2==0) cout << a << endl;
            else cout << c << endl;
        }
        else
        {
            if((A+C)%2==0) cout << c << endl;
            else cout << a << endl;
        }
    }
    return 0;
}
