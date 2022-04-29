#include<stdio.h>
int main()
{
    int i,j,k,a[10][10],b[10][10],c[10][10];
    printf("1st array?\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            scanf("%d",&a[i][j]);
    }
    printf("2nd array?\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0; i<2; i++)
    {
        c[i][j]=0;
        for(j=0; j<3; j++)
        {
            for(k=0; k<2; k++)
            {
                c[i][j]=a[i][j]*b[j][k]+c[i][j];
            }
        }
    }
    printf("New array::\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }
    return 0;
}
