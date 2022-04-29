#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three integer values:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b)
        if(a<c)
            printf("the smallest value is %d", a);
        else
            printf("the smallest value is %d", c);
    else if(b<c)
            printf("the smallest value is %d", b);
        else
            printf("the smallest value is %d", c);
        return 0;
}
