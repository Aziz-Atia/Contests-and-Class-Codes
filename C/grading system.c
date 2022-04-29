

#include<stdio.h>
int main()
{
    int m;
    printf("PLEASE ENTER YOUR MARKS:\n");
    scanf("%d", &m);
    if(m>=80 && m<=100)
        printf("GRADE A\n");
    else if(m>=65 && m<=79)
        printf("GRADE B\n");
    else if(m>=50 && m<=64)
        printf("GRADE C\n");
    else if(m>=40 && m<=49)
        printf("GRADE D\n");
    else if(m>=0 && m<=39)
        printf("GRADE F\n");
    else
        printf("INVALID INPUT\n");
    return 0;
}
