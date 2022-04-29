#include<stdio.h>
#include<math.h>
void merge_sort(int a[100],int p,int r);
void merge(int a[100],int p,int q,int r);
int main()
{
    int i,a[100],p=1,r;
    scanf("%d",&r);
    for(i=1; i<=r; i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,p,r);
    for(i=1; i<=r; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void merge_sort(int a[100],int p,int r)
{
    int q;
    if(p<r)
    {
        q=floor((p+r)/2);
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}

void merge(int a[100],int p,int q,int r)
{
    int n1,n2,i,j,k,l[100],R[100];
    n1=q-p+1;
    n2=r-q;
    for(i=1; i<=n1; i++)
    {
        l[i]=a[p+i-1];
    }
    for(j=1; j<=n2; j++)
    {
        R[i]=a[q+j];
    }
    l[n1+1]=9999;
    R[n2+1]=9999;
    i=1;
    j=1;
    for(k=p; k<=r; k++)
    {
        if(l[i]<=R[j])
        {
            a[k]=l[i];
            i=i+1;
        }
        else
        {
            a[k]=R[j];
            j=j+1;
        }
    }
}

