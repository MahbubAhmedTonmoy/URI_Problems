#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    long long int x,y,t,r,b,c;
    cin >> t;
    while(t--){
            cin >> x >> y;
    r = pow((3*x),2)+pow(y,2);
    b = 2*pow(x,2)+pow((5*y),2);
    c = -100*x+pow(y,3);

        if(r>c && r>b){ cout << "Rafael ganhou" << endl;}
        else if(b>c && b>r){ cout << "Beto ganhou" << endl;}
        else    {cout << "Carlos ganhou" << endl;}

    }

    return 0;
}
