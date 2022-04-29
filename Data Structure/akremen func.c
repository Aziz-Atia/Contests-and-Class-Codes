#include<stdio.h>
int m,n,x;
int main()
{
    scanf("%d%d",&m,&n);
    x=a(m,n);
    printf("\n\tx=%d\n",n+1);
    return 0;
}
int a(int m, int n)
{
    if(m==0)
    {
        printf("\n\t%d ",n+1);
        return n+1;
    }
    else if(m!=0 &&n==0)
    {
        a(m-1,1);
    }
    else if(m!=0&&n!=0)
    {
        a(m-1,a(m,(n-1)));
    }
}
