#include<stdio.h>
int main()
{
    int a,b,r,lcm;
    printf("enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    int ab=a*b;
    while(r!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("the value of gcd is %d\n",a);
    lcm=ab/a;
    printf("the value of lcm is %d\n", lcm);
    return 0;
}

