#include<stdio.h>
int main()
{
    int row,column,sp,n;
    printf("how many lines?\n");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(sp=1; sp<=n-row; sp++)
            printf(" ");
        for(column=1; column<=(2*row)-1; column++)
            printf("*");
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(sp=1; sp<=n-row; sp++)
            printf(" ");
        for(column=1; column<=(2*row)-1; column++)
            printf("*");
        printf("\n");
    }
    return 0;
}
