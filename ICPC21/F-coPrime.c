#include<stdio.h>
int main()
{
    int t,a,b,m,i,gcd;
    printf("hi!");
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&m);
        for(i=1; i<=a+1 && i<=b+1; i++)
        {
            if((a+1)%i==0 && (b+1)%i==0)
                gcd=i;
        }
        printf("gcd",gcd);
    }

    return 0;
}
