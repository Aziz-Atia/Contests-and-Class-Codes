#include<stdio.h>
int main()
{
    int i,n,fibo(i);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\t",fibo(i));
}
int fibo( int i)
{
    static int f1=1,f2=1;
    int f;
    f=(i<3)?1:f1+f2;
    f2=f1;
    f1=f;
    return (f);
}
