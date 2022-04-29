#include<stdio.h>
int a[100],n;
void Bubblesort();
int main()
{
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    Bubblesort();
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void Bubblesort()
{
    int i,j,swap;
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
