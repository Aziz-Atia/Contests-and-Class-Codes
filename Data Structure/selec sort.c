#include<stdio.h>
int main()
{
    int i,n,k,a[10],min,temp,loc;
    printf("N and Array??\n");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        scanf("%d",&a[k]);
    }
    for(k=1;k<=n;k++)
    {
        min=a[k];
        loc=k;
        for(i=k+1;i<=n;i++)
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
    printf("\n\tSorted Array::\n");
    for(k=1;k<=n;k++)
        printf("\n%d\n",a[k]);
    return 0;
}
