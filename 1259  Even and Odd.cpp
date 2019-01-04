#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#define M 100000
using namespace std;
int main()
{
    int a[M];
    int n;
    while(scanf("%d",&n)==1){
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
            for(int j=0;j<n;j++){
                    if(a[j]%2==0)
                    printf("%d\n",a[j]);
            }

                for(int j=n-1;j>=0;j--){
                    if(a[j]%2==1)
                        printf("%d\n",a[j]);
                }
    }
    return 0;
}
