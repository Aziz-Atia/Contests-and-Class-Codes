#include<stdio.h>
int main()
{
    int i,j,n,sum,a[10][10];
    printf("Enter the number of row-column of a square matrix :\n");
    scanf("%d",&n);
    printf("Enter array::\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    }
    sum=0;
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(i==j)
                    sum=sum+a[i][j];
            }
    }
    printf("Sum is %d\n",sum);
    return 0;
}
