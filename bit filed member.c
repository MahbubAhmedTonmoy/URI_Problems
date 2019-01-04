#include<stdio.h>
int main()
{
    struct dmy
    {
        unsigned month : 4;
        unsigned day   : 5;
        unsigned year  : 12;

    }date;

    date.month = 8;
    date.day   = 15;
    date.year  = 1998;
printf("\n mahbub's birthday is %d-%d-%d.", date.month,
                                            date.day ,
                                            date.year);

return 0;
}
