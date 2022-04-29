#include<stdio.h>
int main()
{
    int m;
    printf("PLEASE ENTER YOUR MARKS:\n");
    scanf("%d", &m);
    if(m>0)
        if(m>39)
            if(m>49)
                if(m>64)
                    if(m>79)
                        printf("grade A\n");
                    else
                        printf("grade B\n");
                else
                    printf("grade C\n");
            else
                printf("grade D\n");
        else
            printf("grade F\n");
    else
        printf("invalid input\n");
    return 0;
}
