#include<stdio.h>
int main()
{
    int n,temp,num[1001],f,i,j;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&num[i]);
        }
        f=0;
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                if(num[i]>num[j])
                    f++;
            }
        }
        printf("Minimum exchange operations : %d\n",f);
    }
    return 0;
}
