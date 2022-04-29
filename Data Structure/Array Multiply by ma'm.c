#include<stdio.h>
int main()
{
    int i,j,k,m,p,n,a[10][10],b[10][10],c[10][10];
    printf("\nEnter m,p,n :\n");
    scanf("%d%d%d",&m,&p,&n);

    printf("1st array?\n");
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=p; j++)
            scanf("%d",&a[i][j]);
    }
    printf("2nd array?\n");
    for(i=1; i<=p; i++)
    {
        for(j=1; j<=n; j++)
            scanf("%d",&a[i][j]);
    }
    //  printf("New Array::\n");
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            c[i][j]=0;
            for(k=1; k<=p; k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("New array::\n");
    for(i=1; i<=m; ++i)
    {
        for  (j=1; j<=n; ++j)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
