#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,i,j,esq,Dn;
    char a[1001];

    cin >> n;
    while(n--)
    {
        cin >> a;
        Dn = 0;
        esq = 0;
        j = 0;

        while(true)
        {
            if(a[j] == '\0') break;
            if(a[j] == '<') esq++;
            if(a[j] == '>'){
                if(esq > 0){
                    Dn++;
                    esq--;
                }
            }
            j++;
        }
        cout << Dn << endl;
    }
    return 0;
}
