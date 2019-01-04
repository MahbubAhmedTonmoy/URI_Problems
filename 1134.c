#include<stdio.h>
int main()
{
    int n,sa=0,sg=0,sd=0;
    while(1){
        scanf("%d",&n);
        if(n==4)
            break;
        else{
            if(n==1)
                sa++;
            else if(n==2)
                sg++;
            else if(n==3)
                sd++;
            }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",sa);
    printf("Gasolina: %d\n",sg);
    printf("Diesel: %d\n",sd);

return 0;
}


