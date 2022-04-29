#include<stdio.h>
int main()
{
    int n,a[10],k,temp,ptr;
    printf("enter value of n?\n");
    scanf("%d",&n);
    printf("enter array?\n");
    for(k=1;k<=n;k++)
        scanf("%d",&a[k]);
    a[0]=-9999;
    for(k=2;k<=n;k++)
    {
        temp=a[k];
        ptr=k-1;
        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
    printf("sorted array::\n");
    for(k=1;k<=n;k++)
        printf("%d\n",a[k]);
    return 0;
}
