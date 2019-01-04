#include<stdio.h>
int main()
{

  int i,m,n,sum=0;
  scanf("%d%d",&m,&n);
  while(n<=0)
  {
    scanf("%d",&n);
  }

  for(i=0;i<n;i++)
  {

      sum+=m;
      m++;
  }
  printf("%d\n",sum);
    return 0;
}
