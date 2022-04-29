#include<stdio.h>
int i,j,k,p,q,r,n1,n2,a[100],arr[100],l[100],R[100];
void Merge_sort(a,p,r)
{
    if(p<q)
    {
        q=floor((p+r)/2);
        Merge_sort(a,p,q);
        Merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}
void merge(a,p,q,r)
{
    n1=q-p+1;
    n2=r-q;
    for(i=1;i<=n1;i++)
    {
        l[i]=a[p+i-1];
        for(j=1;j<=n2;j++)
        {
           R[j]=a[q+j];
        }
        l[n1+1]=-99999;
        R[n1+1]=-99999;
        i=1;
        j=1;
        for(k=p;k<=r;k++)
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
}
int main()
{
    scanf("%d%d",&p,&r);
    for(i=1;i<=r;i++)
    {
        scanf("%d",&arr[i]);
    }
    Merge_sort(a,p,r);
    merge(a,p,q,r);
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
