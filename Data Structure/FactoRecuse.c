#include<stdio.h>
int fact (int n);
int main()
{
    int n;
    printf("value of n?\n");
    scanf("%d",&n);
    fact(n);
    printf("Factorial Value is:: %d\n",fact(n));
    return 0;
}
int fact (int n)
{
    if(n==0)
        return 1;
    else
        return (n=n*fact(n-1));
}
