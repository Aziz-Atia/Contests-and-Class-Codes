#include<stdio.h>
int main()
{
    int a,b,k,i,t,sum;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&a,&b);
        sum=0;
        for(k=a; k<=b; k++)
        {
            if(k%2==1)
            {
                sum=sum+k;
            }
        }
        printf("case %d= %d\n",i,sum);
    }
    return 0;
}
