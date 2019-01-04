#include<stdio.h>
int main()
{
    int n,i;
    float a,b,c,av;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %f %f",&a,&b,&c);
        av = (a*2 + b*3 + c*5)/10;
        printf("%.1f\n",av);
    }
    return 0;
}
