#include<stdio.h>
long int fib(int n); //function prototype
main()
{
    int f0=0;
    int f1=1;
    int n,f;
    int fibo(n);
    printf("value of n?\n");
    scanf("%d", &n);
    printf("%d\n",fibo(n));
}

long int fib(int n)
{
    if(n<=2)
        return(n);
    else
        return(f(n-1)+f(n-2));
}

