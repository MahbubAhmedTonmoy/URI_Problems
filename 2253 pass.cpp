#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[40];
    int l,i,yes;

    while(gets(a))
    {
        l= strlen(a);
        yes = 0;
        if(l>=6 && l<=32)
        {
            for(i=0;i<l;i++){
            if((a[i]>='a' && a[i]<='z')&&(a[i]>='A' && a[i]<='Z')&&(a[i]>='1' && a[i]<='9'))
                yes++;
            else
                yes--;
            }
            if(yes==l)
                        cout << "Senha valida." << endl;

            else
                cout << "Senha invalida." << endl;

        }
        else
            cout << "Senha invalida." << endl;
    }
    return 0;
}
