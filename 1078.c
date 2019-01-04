#include<stdio.h>
int main()
{
    int i,max=0,location=0,a[100];

    for(i=1 ; i<=10 ; i++)
        {
        scanf("%d",&a[i]);
          if(a[i]>max)
        {
        max = a[i];
        location = i;
        }
        }
        printf("%d\n%d\n",max,location);

return 0;
}
