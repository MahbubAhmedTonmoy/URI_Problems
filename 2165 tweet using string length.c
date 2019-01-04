#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int length;
    gets(s);
    length = strlen(s);
    if(length<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

return 0;
}
