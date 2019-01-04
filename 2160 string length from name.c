#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int length;
    gets(s);
    length = strlen(s);
    if(length<=80)
        printf("YES\n");
    else
        printf("NO\n");

return 0;
}

