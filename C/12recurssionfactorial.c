#include<stdio.h>
long int factorial(int n); //function prototype
main()
{
    int n;
    printf("value of n?\n");
    scanf("%d", &n);
    printf("%d=%ld\n",n,factorial(n));
}

long int factorial(int n)
{
    if(n<=1)
        return(1);
    else
        return(n*factorial(n-1));
}
