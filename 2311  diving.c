#include<stdio.h>
int main()
{
    int n,i,j;
    double dif,score;

    char name[10000];
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        double max = -10, min =100, ans = 0;
        scanf("%s",name);
        scanf("%lf", &dif);
        for(j=1;j<=7;j++)
        {
            scanf("%lf",&score);
            if(score>max) max=score;
            if(score<min) min = score;
            ans += score;
        }

   ans -= (max+min);
   ans *= dif;

   printf("%s %.2lf\n",name,ans);

    }

    return 0;
}
