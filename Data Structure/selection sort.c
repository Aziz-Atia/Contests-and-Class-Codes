#include<stdio.h>
int main()
{
    int k,i,n,temp,a[10],min,loc;
    printf("n?\n");
    scanf("%d",&n);
    printf("Enter Array:\n");
    for(k=1; k<=n; k++)
    {
        scanf("%d",&a[k]);
    }
    for(k=1; k<=n; k++)
    {
        min=a[k];
        loc=k;
        for(i=k+1; i<=n; i++)
        {
            if(min>a[i])
            {
                min=a[i];
                loc=i;
            }
        }
        if(a[loc]<a[k])
        {
            temp=a[k];
            a[k]=a[loc];
            a[loc]=temp;
        }
    }
    printf("sorted array:\n");
    for(k=1; k<=n; k++)
    {
        printf("%d\n", a[k]);
    }
    return 0;
}
