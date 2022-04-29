#include<stdio.h>
void max_heapify(int a[100],int i);
void max_heapify(int a[100],int i)
{
    int l,n,A,largest,r,swap;
    l=2*i;
    r=2*i+1;
    if(l<=n && a[l]>a[i])
    {
        largest=l;
    }
    else
    {
        largest=i;
    }
    if(r<=n&& a[r]>a[largest])
    {
        largest=r;
    }
    if(i!=largest)
    {
        swap=a[largest];
        a[largest]=a[i];
        a[i]=swap;
        max_heapify(a,largest);
    }

}
int main()
{
    int i,a[100],n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    max_heapify(a,i);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
