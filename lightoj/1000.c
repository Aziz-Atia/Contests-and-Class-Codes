#include<stdio.h>
int main()
{
    int t,i,a,b,sum;
    scanf("%d",&t);
    if(t>125)
    {
        return 0;
    }
    else
    {
        sum=0;
        for(i=1;i<=t;i++)
        {
            scanf("%d%d",&a,&b);
            sum=a+b;
            printf("Case %d: %d",i,sum);
            printf("\n");
        }
    }
    return 0;
}
