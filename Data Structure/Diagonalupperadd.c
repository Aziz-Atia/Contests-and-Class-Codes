#include<stdio.h>
int main()
{
    int i,j,n,a[10][10],sum;
    printf("value of n?\n");
    scanf("%d",&n);
    printf("elements??\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            scanf("%d",&a[i][j]);     /*1 2 3 4
                                        4 5 5 6
                                        1 2 3 5
                                        2 3 4 5 */
    }
    sum=0;
    for(j=2; j<=n; j++)
    {
        for(i=1; i<=j-1; i++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("upper diagonal sum is %d\n",sum);
    return 0;
}
