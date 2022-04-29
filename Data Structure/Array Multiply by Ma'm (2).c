#include<stdio.h>
int main()
{
    int loc,mid,item,beg,end,n,i,a[20];

    printf("n?\n");
    scanf("%d",&n);
    printf("Enter item : ");
    scanf("%d",&item);
    printf("Enter array::\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    beg=1;
    end=n;
    mid=(beg+end)/2;
    while(beg<=end&&a[mid]!=item)
    {
        if(item<a[mid])
        {
            end=mid-1;
        }
        else if(item>a[mid])
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(a[mid]==item)
        loc=mid;
    else
        loc=0;
    printf("\nLocation : ");
    printf("%d",loc);
    return 0;
}
