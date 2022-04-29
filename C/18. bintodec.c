#include<stdio.h>
int main()
{
    int i,n,x,r;
    i=0;
    x=0;
    printf("the binary number you want to convert?\n");
    scanf("%d", &n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        x=x+r*pow(2,i);
        i++;
    }
    printf("converted binary number is::\n %d",x);
    return 0;
}

