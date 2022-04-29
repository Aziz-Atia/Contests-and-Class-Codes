#include<stdio.h>
int n,i;
long int ar[10],s;
int main()
{
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%ld",&ar[i]);
    aVeryBigSum(s);
    printf("%ld",s);
    return 0;
}
void aVeryBigSum(long int s)
{
    s=0;
    for(i=1; i<=n; i++)
    {
        s=s+ar[i];
    }
}
