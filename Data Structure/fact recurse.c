#include<stdio.h>
int main()
{
    int n;
    printf("\n\tEnter N??\n");
    scanf("%d",&n);
    fact(n);
    printf("\n\t Factorial Value is %d\n",fact(n));
    return 0;
}
int fact (int n)
{
    if(n==0)
        return 1;
    else
        return(n=n*fact(n-1));
}
