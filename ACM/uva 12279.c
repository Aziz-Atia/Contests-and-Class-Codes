#include<stdio.h>
int main()
{
    int i,j,n,s=0,sum=0,d,a[100];
    scanf("%d",&n);
    while(n>0)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        if(a[i]>0)
        {
            a[i]=1;
            sum=sum+a[i];
        }
        else if(a[i]==0)
        {
            a[i]=1;
            s=s+a[i];
        }

        printf ("%d %d\n",sum,s);
        d=sum-s;
        printf("Case %d: %d\n",n,d);
    }
    return 0;
}

