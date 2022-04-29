#include<stdio.h>
int main()
{
    int r,c,rsum,csum,i,j,a[10][10];
    printf("no of row column?\n");
    scanf("%d %d",&r,&c);
    printf("Enter Array::\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nRow sum is::\n");
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
        {
          rsum=rsum+a[i][j];
        }
        printf("%d\n",r,rsum);
    }
    printf("\nColumn sum is::\n");
    for(j=0;j<c;j++)
    {
        csum=0;
        for(i=0;i<r;i++)
        {
          csum=csum+a[i][j];
        }
        printf("%d\n",csum);
    }
     return 0;
}
