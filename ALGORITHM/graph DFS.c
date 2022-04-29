#include<stdio.h>
int r,c,i,j,a[10][10],s,visited[10];
int main()
{
    printf("Enter r, c and s?\n");
    while(scanf("%d%d%d",&r,&c,&s))
    {

        printf("Enter graph::\n");
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    dfs(i);
    printf("%d\n",s);
    return 0;
}
void dfs(int s)
{
    visited[s]=1;
    printf("%d\n",s);
    for(i=1; i<=r; i++)
    {
        if(a[s][i]==1&&visited[i]==0)
            dfs(i);
    }
}

