#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int x,y;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&y);
        x=sqrt(y);
        printf("%lld\n\n",x);
    }
    return 0;
}
