#include<stdio.h>
int main()
{
    int i,n,m,sc=0,sr=0,ss=0;
    char a;
    float ac,ar,as,total;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %c",&m,&a);
        if(a=='C'){
            sc+=m;
        }
        if(a=='R'){
            sr+=m;
            }
        if(a=='S'){
            ss+=m;
            }
    }
    total=sc+sr+ss;
    ac=(sc/total)*100.00;
    ar=(sr/total)*100.00;
    as=(ss/total)*100.00;

    printf("Total: %.0f cobaias\n",total);
    printf("Total de coelhos: %d\n",sc);
    printf("Total de ratos: %d\n",sr);
    printf("Total de sapos: %d\n",ss);
    printf("Percentual de coelhos: %.2f %%\n",ac);
    printf("Percentual de ratos: %.2f %%\n",ar);
    printf("Percentual de sapos: %.2f %%\n",as);
return 0;
}
