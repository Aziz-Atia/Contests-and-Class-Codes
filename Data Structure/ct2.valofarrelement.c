#include<stdio.h>
int main()
{
    int zero,nonzero,g5,n,a[10][10],i,j;
    printf("enter value of n and enter your square matrix:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    }
    zero=0;
    nonzero=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]==0)
                zero++;
            else if(a[i][j]!=0)
                nonzero++;
            else if(a[i][j]>5)
                g5++;
        }
    }
    printf("No of zero,nonzero are %d, %d respectively\n",zero,nonzero);
    g5=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
             if(a[i][j]>5)
                g5++;
        }
    }
    printf("values greater than 5 are: %d\n",g5);
    return 0;
}
