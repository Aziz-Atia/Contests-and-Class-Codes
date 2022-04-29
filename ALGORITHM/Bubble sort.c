#include<stdio.h>
void Bubblesort(int a[100]);
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    Bubblesort(a);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void Bubblesort(int a[100])
{
    int i,j,n,swap;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i+1;j--)
        {
            if(a[j]<a[j-1])
            {
                swap=a[j-1];
                a[j-1]=a[j];
                a[j]=swap;
            }
        }
    }
}
