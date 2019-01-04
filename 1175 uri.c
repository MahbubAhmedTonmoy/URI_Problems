#include<stdio.h>
int main()
{
    int i,j,a[20],temp;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0,j=19;i<10;i++,j--)
        {
            temp = a[i];
            a[i]=a[j];
            a[j]=temp;


        }


    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}
