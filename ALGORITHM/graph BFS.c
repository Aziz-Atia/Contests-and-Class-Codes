#include<stdio.h>
int n,i,j,a[10][10],s,k,f,r,q[10];
int main()
{
    printf("Enter n and s?\n");
    while(scanf("%d%d",&n,&s))
    {

        printf("Enter graph::\n");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        bfs(i);
    }
    return 0;
}
void bfs(int s)
{
    f=0,r=0;
    q[r]=s;
    r++;
    while(f!=r+1)
    {
        k=q[f];
        f++;
        for(j=1; j<=n; j++)
        {
            if(a[k][j]==1)
            {
                r++;
                q[r]=j;
            }
            printf("%d\n",k);
        }
    }
}
