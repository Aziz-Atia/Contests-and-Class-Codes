#include<stdio.h>
int main()
{
    int y;
    printf("please enter any year:\n");
    scanf("%d", &y);
    if(y>1752)
    {
        if(y%400==0)
            printf("the year is a leap year\n");
        else if(y%100!=0 && y%4==0)
            printf("the year is a leap year\n");
        else
            printf("this is not a leap year\n");
    }
    else
    {
        if(y%4==0)
            printf("this is leap year.\n");
        else
            printf("this is not leap year\n");
    }
    return 0;
}
