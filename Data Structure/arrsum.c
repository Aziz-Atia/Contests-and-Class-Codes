#include<stdio.h>
int main()
{
    int i,j,a[10][10],b[10][10],s[10][10],r,c;
    printf("Number of row and column?\n");
    scanf("%d %d",&r,&c);
    printf("enter 1st Array:: \n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter 2nd Array:: \n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
            scanf("%d",&b[i][j]);
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
            s[i][j]=a[i][j]+b[i][j];
    }
    printf("Added array is:: \n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }

    return 0;

}
