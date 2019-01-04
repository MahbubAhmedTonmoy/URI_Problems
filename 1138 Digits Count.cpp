#include<bits/stdc++.h>


int main()
{
    int n,a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
    int a,b,i,j,p;
    while(scanf("%d%d",&a,&b)==2){
            if(a==0 && b==0) break;
        a0=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;a8=0;a9=0;

        for(j=a;j<=b;j++)
        {
            p=j;
            while(p!=0)
            {
                if(p%10==0)
                a0++;
                if(p%10==1)
                a1++;
                if(p%10==2)
                a2++;
                if(p%10==3)
                a3++;
                if(p%10==4)
                a4++;
                if(p%10==5)
                a5++;
                if(p%10==6)
                a6++;
                if(p%10==7)
                a7++;
                if(p%10==8)
                a8++;
                if(p%10==9)
                a9++;
                p=p/10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
    }
    return 0;
}
