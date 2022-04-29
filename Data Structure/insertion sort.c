#include<stdio.h>
int main()
{
    int i,ptr,temp,a[10],n;
    printf("\n\tEnter n and array::\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=-9999;
    for(i=2;i<=n;i++)
    {
        temp=a[i];
        ptr=i-1;
        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
    printf("\n\tSorted array::\n");
        for(i=1;i<=n;i++)
            printf("\n\t%d",a[i]);
    return 0;
}
