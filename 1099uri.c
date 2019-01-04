#include<stdio.h>
int main()
{
    int i,j,x,y,s=0,n;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d %d",&x,&y);
    if(x<y){
        for(i=x+1 ; i<y ; i++){
            if(i % 2!= 0){
                s += i;
            }
        }
        printf("%d\n",s);
        s = 0;
    }
    else if(x>y){
        for(i=y+1 ; i<x ; i++){
            if(i % 2!= 0){
                s += i;
            }
        }
        printf("%d\n",s);
        s = 0;

    }
    else if(x==y){
        printf("%d\n",s);
    }
    }
return 0;
}
