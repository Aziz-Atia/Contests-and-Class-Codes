#include<stdio.h>
int main()
{
    int i,x,n,result;
    result=1;
    printf("value of x and n?\n");
    scanf("%d %d", &x, &n);
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("x to the power n=%d", result);

    return 0;
}

