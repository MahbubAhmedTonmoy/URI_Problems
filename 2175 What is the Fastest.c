#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<b && a<c)
        printf("Otavio\n");
    else if(b<a && b<c)
        printf("Bruno\n");
    else if(c<a && c<b)
        printf("Ian\n");
    else
        printf("Empate\n");
    return 0;
}
