#include<stdio.h>
int main()

{
 int x,sum,i;
 while(1)
 {
     scanf("%d",&x);
    if(x==0)
     {
         break;
     }
     else
     {
     sum = 0;
     for(i=x;i<x+10;i++)
     {
         if(i%2==0)
         sum += i;
     }
     printf("%d\n",sum);
     }
 }
 return 0;
}
