#include <stdio.h>
int main()
{
    double s=0.0, M[12][12];
    char T[2];
    int C,row,col;
    scanf("%s", &T);
    for(row = 0; row <= 11; row++)
    {
        for(col = 0; col <= 11; col++)
        {
        scanf("%lf", &M[row][col]);
        if(row < col)
            s+=M[row][col];
        }
    }
    if(T[0]=='S')
        printf("%.1lf\n",s);
    else if(T[0]=='M')
    {
        s=s/66.0;
        printf("%.1lf\n",s);
    }
    return 0;
}

