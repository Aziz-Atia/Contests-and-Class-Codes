#include<stdio.h>
#include<math.h>
int n;
void Heap_sort(int a[100]);
void build_maxheap(int a[100]);
void max_heapify(int a[100],int i);
void max_heapify(int a[100],int i)
{
    int l,heapsize,A,largest,r,swap;
    l=2*i;
    r=2*i+1;
    if(l<=heapsize && a[l]>a[i])
    {
        largest=l;
    }
    else
    {
        largest=i;
    }
    if(r<=heapsize&& a[r]>a[largest])
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
void build_maxheap(int a[100])
{
    int heapsize,i,x;
    x=floor(heapsize/2);
    for(i=x;i>=1;i--)
    {
        max_heapify(a[100],i);
    }
}
void Heap_sort(int a[100])
{
    int i,heapsize,temp;
    build_maxheap(a[100]);
    for(i=heapsize;i>=1;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        heapsize=heapsize-1;
        max_heapify(a[100],1);
    }
}
int main()
{
    int heapsize,i,a[100];
    scanf("%d",&n);
    heapsize=n;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    Heap_sort(a[100]);
    printf("Sorted Tree::\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
