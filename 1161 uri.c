#include<stdio.h>
int main()
{
long long int i,j,m,n,f_m=1,f_n=1;
while((scanf("%lld%lld",&m,&n))!=EOF)
    {

   for(i=1;i<=m;i++)
   {
      f_m *= i;
   }
   for(j=1;j<=n;j++)
   {
       f_n*=j;
   }

   printf("%lld\n",f_m+f_n);
   f_m=f_n=1;
}
return 0;
}
