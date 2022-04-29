#include<stdio.h>
int main()
{
   int c,n,fibo(c);
   printf("value of n?\n");
   scanf("%d", &n);
   for(c=1;c<=n;++c)
   {
       printf("%d\t", fibo(c));
   }
}
int fibo(int c)
{
    static int f1=1,f2=1;
    int f;
    f=(c<3)?1:f1+f2;
    f2=f1;
    f1=f;
    return (f);
}
