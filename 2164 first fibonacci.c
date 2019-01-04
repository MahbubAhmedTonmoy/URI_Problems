#include<math.h>
int main()
{
    int n;
    double F;

    scanf("%d",&n);
    F = pow(((1+sqrt(5))/2),n) - pow(((1-sqrt(5))/2),n);

    F = F/ sqrt(5);

    printf("%.1lf\n",F);


return 0;
}
