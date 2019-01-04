#include<stdio.h>
int main()
{
    int i,a[10];
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<=9;i++)
     {
         if(a[i]<=0)
         {
             printf("X[%d] = %d\n",i,1);
         }
         else
         {
             printf("X[%d] = %d\n",i,a[i]);
         }
     }
     return 0;
}
