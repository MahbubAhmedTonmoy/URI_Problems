#include<stdio.h>

int main()
{
   float age,ave,count=0,sum=0;

   while(1)
   {
       scanf("%f",&age);
       if(age<0)
        break;
       if(age>0)

       {
           count++;
            sum+=age;
       }
   }
   printf("%.2f",sum/count);
    return 0;
}
