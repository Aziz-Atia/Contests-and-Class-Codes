#include<stdio.h>
int n,i,j,a[10][10],s,k,f,r,q[10];
int main()
{
    printf("\n\tValue of s?\n");
    scanf("%d",&s);
    Bfs(s);
}
void Bfs(int s)
{
    f=0,r=0;
    printf("\n\tEnter n?\n");
    scanf("%d",&n);
    printf("\n\tEnter Matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    r++;
    q[r]=s;
    while(f!=r+1)
    {
        f++;
        k=q[f];
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==1)
        {
            r++;
            q[r]=j;
        }
        }
        printf("%d\n",k);
    }
}
