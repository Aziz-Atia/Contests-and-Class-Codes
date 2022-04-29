#include<stdio.h>
nt r,c,i,j,a[10][10],s,visited[10];
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
    bfs(i);
    printf("%d\n",s);
    return 0;
}
