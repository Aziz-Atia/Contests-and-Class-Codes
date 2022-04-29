#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n>9 && n<=20)
            printf("What?\n");
        else
        {
            for(j=1;j<=n;j++)
            {
                for(i=1;i<n;i++)
                    printf("%d ",i);
                                printf("hop! ");
            }
            printf("\n");
        }
    }
}
