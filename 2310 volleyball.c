#include<stdio.h>
int main()
{
    int n,i,s,s1,b,b1,a,a1;
    double sum_s=0,sum_b=0,sum_a=0;
    double sum_s1=0,sum_b1=0,sum_a1=0;
    double a_s,a_b,a_a;
    char name[10000];
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",name);
        scanf("%d%d%d", &s, &b, &a);
        scanf("%d%d%d", &s1, &b1, &a1);

        sum_s +=s; sum_b +=b; sum_a +=a;

        sum_s1 +=s1; sum_b1 +=b1; sum_a1 +=a1;

    }
    a_s = (sum_s1/sum_s)*100;
    a_b = (sum_b1/sum_b)*100;
    a_a =  (sum_a1/sum_a)*100;
    printf("Pontos de Saque: %.2lf %%.\n",a_s);
    printf("Pontos de Bloqueio: %.2lf %%.\n",a_b);
    printf("Pontos de Ataque: %.2lf %%.\n",a_a);

    return 0;
}
