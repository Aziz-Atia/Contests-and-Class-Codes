#include<stdio.h>
int main()
{
    int i,j,r=10,c=10;
    int matrix[r][c];
    printf("enter the value of r and c?\n");
    scanf("%d %d", &r, &c);
    printf("the input is ::\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d", &matrix[i][j]);
    }
    printf("the output is ::\n");
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
            printf("%d\t", matrix[i][j]);
            printf("\n");
    }
    return 0;
}
