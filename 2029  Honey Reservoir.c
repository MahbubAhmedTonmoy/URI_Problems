#include<stdio.h>
int main()
{
    double v,d,r,a,h;

    while(scanf("%lf%lf",&v,&d)!=EOF)
    {
    r = d/2;
    h = v/(3.14*r*r);
    a = (3.14*r*r);

    printf("ALTURA = %.2lf\nAREA = %.2lf\n",h,a);
    }
return 0;
}
