#include<stdio.h>
int fibo (int n);
int main()
{
    int i,c,n;
    printf("n?\n");
    scanf("%d",&n);
    /*fibo(n);
    for(i=0;i<n;i++)
        printf("%d  ",fibo(i));*/
    c=fibo(n);
    for(i=0; i<c; i++)
        printf("%d ",i);
    return 0;
}
int fibo (int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}
