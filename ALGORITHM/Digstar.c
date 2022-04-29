#include<stdio.h>
int g[10][10],i,j,n;
void digstar(int g[10][10],int w[10][10], int s);
int main()
{
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    digstar(g,w,s);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d",g[i][j]);
        }
        printf("/n");
    }
}
void digstar(int g[10][10],int w[10][10], int s)
{
    int d[10],pi[10],q[10],v[10];
    for(i=1; i<=n; i++)
    {
        v[i]=0;
        d[i]=w[s][i];
    }
    v[s]=1;
    d[s]=0;
    for(j=2; j<=n; j++)
    {
        int min=9999;
        for(i=1; i<=n; i++)
        {
            if(!v[i])
            {
                if(d[i]<min)
                {
                    min=d[i];
                    k=i;
                }
            }
        }
    }
    for(k=1; k<=n; k++)
    {
        if(w[i][k]!=9999 && v[i]==0)
        {
            if(d[j]>d[i]+w[i][j])
            {
                d[j]=d[i]+w[i][j];
                pi[j]=i;
            }
        }
    }
    v[i]=1;
}

