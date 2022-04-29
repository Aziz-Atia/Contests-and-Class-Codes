#include<stdio.h>
int main()
{
    int i,j,r,c,rsum,csum;
    int matrix[10][10];
    printf("enter the value of r and c?\n");
    scanf("%d %d", &r, &c);
    printf("enter the matrix?\n");
    for(i=0; i<r; i++)
    {
        {
            for(j=0; j<c; j++)
                scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nrow sum is ::\n");
    for(i=0; i<r; i++)
    {
        rsum=0;
        for(j=0; j<c; j++)
        {
            rsum=rsum+matrix[i][j];
        }
        printf("%d\n",rsum);


    }
    printf("\ncolumn sum is::\n");
    for(j=0; j<c; j++)
    {
        csum=0;
        for(i=0; i<r; i++)
        {
            csum=csum+matrix[i][j];

        }
        printf("%d\n",csum);


    }
    return 0;
}
