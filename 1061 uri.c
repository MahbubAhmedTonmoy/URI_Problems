#include<stdio.h>
int main()
{
    char x[4],y[4];
    int d1,d2,m1,m2,h1,h2,s1,s2,st1,st2,total,d,h,m,s;
    scanf("%s",x);
    scanf("%d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%s",y);
    scanf("%d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    st1 = d1*86400 + h1*3600 + m1*60 + s1;
    st2 = d2*86400 + h2*3600 + m2*60 + s2;
    total = st2 - st1;
    if(total>=60)
    {
        d = total/86400;
        h = (total%86400)/3600;
        m = ((total%86400)%3600)/60;
        s = ((total%86400)%3600)%60;
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
    }
    return 0;
}
