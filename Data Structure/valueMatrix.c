#include<stdio.h>
int main()
{
    int i,j,n,a[10][10],g5,zero,nonzero;
    printf("n?\n");
    scanf("%d",&n);
    printf("enter array::\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            scanf("%d",&a[i][j]);
    }
    zero=0;
    nonzero=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i][j]==0)
                zero++;
            else if(a[i][j]!=0)
                nonzero++;
        }
    }
    printf("no of zero is %d and no of nonzero is %d\n",zero,nonzero);
    //printf("values greater than 5 are::");
    /* for(i=1; i<=n; i++)
     {
         for(j=1; j<=n; j++)
         {
             if(a[i][j]>5)
             {
                 printf("%d  ",a[i][j]);
             }
         }
     }*/
    printf("values greater than 5:: \n");
    g5=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i][j]>5)
            {
                printf("%d  \n",a[i][j]);
                g5++;
            }
        }
    }
    printf("values greater than 5 is::%d \n", g5);

    return 0;
}
