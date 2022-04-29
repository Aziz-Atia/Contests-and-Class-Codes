#include<stdio.h>
int main()
{
    int i,n,beg,end,mid,loc,item,a[20];
    printf("enter n and item?\n");
    scanf("%d %d",&n, &item);
    printf("enter array?\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end && a[mid]!=item)
    {
        if(item<a[mid])
            end=mid-1;
        else if(item>a[mid])
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(a[mid]==item)
        loc=mid;
    else
        loc=NULL;
    printf("location::  ");
    printf("%d\n",loc);
    return 0;

}
