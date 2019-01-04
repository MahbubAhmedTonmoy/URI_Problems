#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char eq[1001];
    int i, p,n;
    while(scanf("%s",&eq)!= EOF){
        p = 0;
        n = 0;
        for(i=0; eq[i]!= '\0'; i++){
            if(eq[i] == '(') p++;
            else if(eq[i] == ')'){
                n++;
                if(p > 0){
                    p--;
                    n--;
            }
        }
    }
    if(p ==0 && n == 0) printf("correct\n");
    else printf("incorrect\n");
    }
    return 0;
}
