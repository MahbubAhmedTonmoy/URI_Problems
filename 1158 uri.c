#include<stdio.h>
int main()

{
 int x,y,n,s,i,j,count;
 scanf("%d",&n);
 for(j=0 ; j<n ; j++)
{
 scanf("%d %d",&x,&y);
 s =0;
 count =0;
 for (i=x ; i<=(x+(y*2)) ; i++){

    if(i%2!=0){
    s += i;
    count++;
    }
        if (count == y){
        break;
    }

 }
    printf("%d\n",s);
}
return 0;
}
