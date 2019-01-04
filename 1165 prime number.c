#include <stdio.h>
int main() {
int a, j, n, i,c;
scanf("%d", &a);
for(j=1;j<=a;j++){
scanf("%d", &n);
c=0;
for (i = 1; i <= n; i++) {
        if (n % i == 0)
        {
         c++;
        }
}
if (c == 2)
    printf("%d eh primo\n",n);

else
    printf("%d nao eh primo\n",n);
}
return 0;
}
