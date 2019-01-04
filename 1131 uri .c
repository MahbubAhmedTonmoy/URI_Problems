#include<stdio.h>
int main()
{
    int a,x,y,irg=0,gr=0,dr=0,total=0;
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            irg++;
        }
        if(y>x)
        {
            gr++;
        }
        if(x==y)
        {
            dr++;
        }
        total++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&a);
        if(a==1)
            continue;
        else if(a==2)
            break;
    }

printf("%d grenais\n",total);
printf("Inter:%d\n",irg);
printf("Gremio:%d\n",gr);
printf("Empates:%d\n",dr);
if(gr>irg)
    printf("Gremio venceu mais\n");
else if(irg>gr)
    printf("Inter venceu mais\n");
else
    printf("Nao houve vencedor\n");

    return 0;
}
