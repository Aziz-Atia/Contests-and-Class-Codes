#include<stdio.h>
int main()
{
    int r,c,p,k,i,j,a[10][10],b[10][10],m[10][10],t;
    printf("Number of row and column?\n");
    scanf("%d %d %d",&r,&c,&p);
    printf("1st array:\n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
            scanf("%d",&a[i][j]);
    }
    printf("2nd Array:\n");
    for(i=1; i<=c; i++)
    {
        for(j=1; j<=p; j++)
            scanf("%d",&b[i][j]);
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=p; j++)
        {
            m[i][j]=0;
            for(k=1; k<c; k++)
            {
                m[i][j]=m[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("Multiplicated array is:\n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
            printf("%d",&m[i][j]);
    }
}
