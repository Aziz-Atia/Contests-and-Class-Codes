#include<stdio.h>
int main()
{
    int i,j,c=0,sum=0,arr[10];
    printf("arr= ");
    for(i=1; i<=6; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sum= ");
    scanf("%d",&sum);
    for(i=1; i<=6; i++)
    {
        for(j=i+1; j<=6; j++)
        {
            c=arr[i]+arr[j];
            if(c==sum)
                printf("Pair found at index %d and %d (%d+%d)\n",i,j,arr[i],arr[j]);
        }
    }
    return 0;
}
