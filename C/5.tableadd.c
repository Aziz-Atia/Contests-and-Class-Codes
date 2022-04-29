#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],s[10][10];
    int r,c,i,j;
    printf("enter row and column no of matrix?\n");
    scanf("%d %d", &r, &c);
    printf("matrix a is ::\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf("matrix b is ::\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    printf("the output is::\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

    return 0;
}

