#include<stdio.h>
int main()
{
    int n1,n2,r,lcm,gcd;
    printf("enter the values of n1 and n2?\n");
    scanf("%d %d", &n1, &n2);
    r=n1%n2;
    while(r!=0)
    {
        n1=n2;
        n2=r;
        r=n1%n2;
    }
    gcd=n2;
    lcm=(n1*n2)/gcd;
    printf("GCD and LCM is %d and %d\n", gcd,lcm);
    return 0;
}
