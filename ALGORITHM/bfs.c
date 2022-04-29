#include<stdio.h>
int c[10],d[10],p[10],g[10][10],s,n;
void bfs()
{
    int i,j,q[10],rear=0,front=0;
    for(i=1; i<=n; i++)
    {
        if(i!=s)
        {
            c[i]=0;
            d[i]=0;
            p[i]=-1;
        }
    }
    c[s]=1;
    d[s]=0;
    p[s]=-1;
    rear++;
    q[rear]=s;
    while(front!=rear)
    {
        front++;
        i=q[front];
        for(j=1; j<=n; j++)
        {
            if(g[j][i]==1)
            {
                if(c[j]==0)
                {
                    c[j]=1;
                    d[j]=d[i]+1;
                    p[j]=i;
                    rear++;
                    q[rear]=j;
                }
            }
        }
        c[i]=2;
    }
}
int main()
{
    int i,j;
    scanf("%d%d",&n,&s);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    bfs();
    for(i=1; i<=n; i++)
    {
        printf("%d\n",p[i]);
    }
    for(i=1; i<=n; i++)
    {
        printf("%d\n",d[i]);
    }
    for(i=1; i<=n; i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}
