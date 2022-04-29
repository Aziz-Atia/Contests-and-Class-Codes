#include<stdio.h>
int main()
{
    int i,j,r,c;
    int matrix[r][c];
    printf("enter the value of r and c?\n");
    scanf("%d %d", &r, &c);
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
            scanf("%d", &matrix[i][j]);
    }
    printf("the output is ::\n");
    for(j=0;j<=c;j++)
    {
        for(i=0;i<=r;i++)
            printf("%d",matrix[i][j]);
        printf("\n");
    }
    return 0;
}
