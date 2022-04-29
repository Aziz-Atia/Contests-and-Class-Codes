#include<stdio.h>
int main()
{
    int n,i,j,s[10],temp,sum,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&s[i]);
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
            if(s[j]<s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
    }
    /*printf("array\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",s[i]);
    }*/
    for(i=1;i<=n;i++)
    {
        if(s[i+1]<s[i])
        {
            s[i+1]=0;
        }
    }
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+s[i];
    }
    printf("%d\n",sum);
    return 0;
}
