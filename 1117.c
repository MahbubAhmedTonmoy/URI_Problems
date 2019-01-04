#include<stdio.h>
int main()
{
    int i,count=0;
    float a,sum=0;
    for(i=0;i<100;i++){
        scanf("%f",&a);
        if(a>=0.0 && a<=10.0){
            count++;
            sum+=a;
        if(count == 2){
                break;
            }
            }
        else
            printf("nota invalida\n");
    }
printf("media = %.2f\n",sum/2.0);
return 0;
}
