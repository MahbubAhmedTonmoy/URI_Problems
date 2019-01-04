#include <stdio.h>
int main()
{
    double s=0.0, M[12][12];
    char T[2];
    int C,i,j;
    scanf("%d", &C);
    scanf("%s", &T);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11; j++)
        {
        scanf("%lf", &M[i][j]);
        if(j==C)
            s+=M[i][j];
        }
    }
    if(T[0]=='S')
        printf("%.1lf\n",s);
    else if(T[0]=='M')
    {
        s=s/12.0;
        printf("%.1lf\n",s);
    }
    return 0;
}
