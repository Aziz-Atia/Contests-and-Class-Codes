#include<stdio.h>
void quick_sort(int a[100],int p, int r);
int partition(int a[100],int p, int r);
int main()
{
    int i,p=1,r,a[100];
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        scanf("%d",&a[i]);
    }
    quick_sort(a,p,r);
    for(i=1;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void quick_sort(int a[100],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}
int partition(int a[100],int p,int r)
{
    int x,i,j,swap,temp;
    x=a[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            swap=a[j];
            a[j]=a[i];
            a[i]=swap;
        }
    }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;
}
