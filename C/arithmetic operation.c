#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,sum,diff,mult;
    float div;
    printf("enter any two integer values:\n");
    scanf("%d %d", &a, &b);
    sum=a+b;
    diff=abs(a-b);
    mult=a*b;
    div=(float)(a)/b;
    printf("the sum is %d\n", sum);
    printf("the difference  is %d\n", diff);
    printf("the product is %d\n", mult);
    printf("the quotient is %f", div);
    return 0;
}
