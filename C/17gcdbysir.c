#include<stdio.h>
int main()
{
    int a,b,r;
    printf("enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    while(r!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("the value of gcd is %d\n",a);
    return 0;
}
