#include<stdio.h>
int main()
{
int a,b,c,x,y,z,temp,i;
scanf("%d %d %d",&a,&b,&c);
x=a;
y=b;
z=c;
for(i=0;i<3;i++){
if(x>y){temp = x;x=y;y=temp;}
if(y>z){temp = y;y=z;z=temp;}
}
printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",x,y,z,a,b,c);
return 0;
}
