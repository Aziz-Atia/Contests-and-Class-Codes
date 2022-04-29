#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],x;
    printf("enter row and column?\n");
    while(scanf("%d%d",&r,&c))
    {
        printf("Enter array::\n");
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        x=0;
        for(i=1; i<=r; i++)
        {
            for(j=i; j<=c; j++)
            {
                if(a[i][j]==0)
                    x++;
            }
        }
        //printf("sum is %d\n",sum);
        if(x==0)
            printf("this is a lower sparse matrix\n");

        else
            printf("this is a upper sparse matrix\n");

    }
}
