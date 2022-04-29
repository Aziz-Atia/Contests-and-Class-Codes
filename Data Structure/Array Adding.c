#include<stdio.h>
int main()
{
    int i,j,a[10][10],b[10][10],s[10][10];
    printf("enter array a?\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    }
    printf("enter array b?\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&b[i][j]);
    }

    printf("added array is ::\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }


    return 0;
}
