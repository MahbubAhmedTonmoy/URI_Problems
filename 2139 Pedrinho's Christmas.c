#include<stdio.h>
int main()
{
    int m,d,a=0;
    while(scanf("%d%d",&m,&d)!=EOF)
    {


    if(m==1)
        a = 360 - d;
    if(m==2)
        a = 360 -(31+d);
    if(m==3)
        a = 360 - (60+d);
    if(m==4)
        a = 360 - (91+d);
    if(m==5)
        a = 360 -(121+d);
   if(m==6)
        a = 360 - (152+d);
    if(m==7)
        a = 360 - (182+d);
   if(m==8)
        a = 360 -(213+d);
    if(m==9)
        a = 360 - (244+d);
    if(m==10)
        a = 360 - (274+d);
    if(m==11)
        a = 360 -(305+d);
    if(m==12)
        a = 360 - (335+d);

    if(a==0)
        printf("E natal!\n");
    else if(a<0)
        printf("Ja passou!\n");
    else if(a==1)
        printf("E vespera de natal!\n");
    else
        printf("Faltam %d dias para o natal!\n",a);
    }

return 0;
}

