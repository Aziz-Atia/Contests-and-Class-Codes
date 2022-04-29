#include<stdio.h>
int main()
{
    long int n,sum;
    int i;
    while(scanf("%ld",&n))
    {
        if(n<0)
            break;
        sum=1;
        for(i=1; i<=n; i++)
        {
            sum=sum+i;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
