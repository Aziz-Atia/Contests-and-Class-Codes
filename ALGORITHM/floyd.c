#include<stdio.h>
int g[10][10],n;
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    floyd();
    printf("Generating Output::\n");
    for(i+1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d",g[i][j]);
        }
    }
}
void floyd()
{
    printf("hi\n");
    int i,j,k;
    for(k=1; k<=n; k++)
    {
        for(j=1; j<=n; j++)
        {
            //printf("hi\n");
            for(i=1; i<=n; i++)
            {
                if(g[i][j]<g[i][k]+g[k][j])
                {
                    g[i][j]=g[i][j];
                }
                else
                {
                    g[i][j]=g[i][k]+g[k][j];
                }
            }
        }
    }
}
