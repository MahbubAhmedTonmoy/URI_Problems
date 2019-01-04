#include<iostream>
using namespace std;
int main()
{
    long long int t,i,y;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> y;
        if (y<2015)
        {
            cout<< (2015-y) << " D.C." << endl;
        }
        else if (y>=2015)
        {
            cout<< (y-2015+1) << " A.C." << endl;
        }
    }
    return 0;
}
