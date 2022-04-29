#include<stdio.h>
int d[10][10],n;
int main()
{
    int i,j,k,w;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&d[i][j]);
        }
    }
    floyd();
    printf("Generating Output::\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }

}
void floyd()
{
    //int d[10]
    int i,j,k;
    for(k=1; k<=n; k++)
    {
        for(j=1; j<=n; j++)
        {
            for(i=1; i<=n; i++)

            {
                if(d[i][j]<d[i][k]+d[k][j])
                {
                    d[i][j]=d[i][j];
                }
                else
                {
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
}







/*
5
0 3 8 99 -4
99 0 99 1 7
99 4 0 99 99
2 99 -5 0 99
99 99 99 6 0
*/
