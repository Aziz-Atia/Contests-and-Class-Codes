#include<stdio.h>
int i,j,n,t,g[10][10];
int main()
{
    int c[10],p[10],f[10];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    Dfs(g);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d",g[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d",p[i]);
    }

    for(i=1;i<=n;i++)
    {
        printf("%d",c[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d",f[i]);
    }
    return 0;
}
void Dfs(int g[10][10])
{
    int c[10],p[10];
    for(i=1; i<=n; i++)
    {
        c[i]=0;
        p[i]=-1;
    }
    t=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(c[i]==0)
            {
                dfs_v(g,j);
            }
        }
    }

}
void dfs_v(int g[][],int i)
{

    int c[10],p[10],f[10];
    t=t+1;
    d[i]=t;
    c[i]=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(c[j]==0)
            {
                p[j]=i;
                dfs_v(g,j);
            }
        }
    }
    c[i]=2;
    t=t+1;
    f[i]=t;
}
