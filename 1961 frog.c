#include<stdio.h>
#include<math.h>
int main()
{
  int p,n,h,i,flag = 1,temp,t;
  scanf("%d%d",&p,&n);

  for(i=1;i<=n;i++)
  {
      scanf("%d",&h);
    if(i==1)
        temp = h;
    else{
        t = abs(h-temp);
        if(t>p)
        {
        flag = 0;
        }
      temp = h;
    }

  }
  if(flag == 1)
    printf("YOU WIN\n");
  else
    printf("GAME OVER\n");


return 0;
}

