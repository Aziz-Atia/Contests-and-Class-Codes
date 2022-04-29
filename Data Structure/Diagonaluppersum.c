#include<stdio.h>
int main()
{
    int i,j,n,sum,array[12][12];
    printf("n?\n");
    scanf("%d",&n);
    printf("Enter Array::\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",array[i][j]);
    }
     sum=0;
     for(j=1; j<n; j++)
    {
        for(i=0; i<j-1; i++)
           sum=sum+array[i][j];
    }
    printf("sum is %d\n", sum);
    return 0;
}
