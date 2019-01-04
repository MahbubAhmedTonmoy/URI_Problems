#include<stdio.h>
int main()
{
int a[1000],i,n,min=0,location=0;
scanf("%d",&n);
for(i=0 ; i<n ; i++)
{
scanf("%d",&a[i]);


if(a[i]<min)
{
    min = a[i];
    location = i;
}
}
printf("Menor valor: %d\nPosicao: %d\n",min,location);

return 0;

}

